#! /bin/bash

sed -i 's/rpm.install.excludedocs = yes/rpm.install.excludedocs = no/' /etc/zypp/zypp.conf
sed -i "s/\$SUBNET/${SUBNET}/g" /tmp/hosts

cp /tmp/hosts /etc/hosts
echo "StrictHostKeyChecking no" >>/etc/ssh/ssh_config
mkdir /root/.ssh
chmod 700 /root/.ssh
mv /tmp/id_rsa /root/.ssh/id_rsa
mv /tmp/id_rsa.pub /root/.ssh/id_rsa.pub
mv /tmp/authorized_keys /root/.ssh/authorized_keys
chmod 600 /root/.ssh/id_rsa
chmod 600 /root/.ssh/authorized_keys
chown root:root /root/.ssh/authorized_keys
chown root:root /root/.ssh/id_rsa
chown root:root /root/.ssh/id_rsa.pub

# SEE https://bugzilla.suse.com/show_bug.cgi?id=1218649
SUSEConnect -r $SLEREGCODE
zypper in -y suseconnect-ng

rpm -e --nodeps sles-release
SUSEConnect -p SLES_SAP/15.5/x86_64 -r $SAPREGCODE
SUSEConnect -p sle-module-basesystem/15.5/x86_64
SUSEConnect -p sle-module-desktop-applications/15.5/x86_64
SUSEConnect -p sle-module-server-applications/15.5/x86_64
SUSEConnect -p sle-ha/15.5/x86_64 -r $SAPREGCODE
SUSEConnect -p sle-module-sap-applications/15.5/x86_64

if [ $DEPLOYMENT == "fulldeploy-3node" ]; then
  echo "fulldeploy-3node"

  zypper in -y -t pattern base documentation enhanced_base ha_sles
  zypper patch -y
  zypper in -y nfs-client chrony wget
  
  # Need to Test this
  #
  #HOST="nfs15sp5"
  #MAX_RETRIES=24
  #RETRY_INTERVAL=5 # seconds
  #
  #check_nfs_server_status() {
  #    SSH_OUTPUT=$(ssh -o StrictHostKeyChecking=no "$HOST" 'systemctl is-active nfs-server' 2>&1)
  #    echo "$SSH_OUTPUT" | grep -q "active"
  #    return $?
  #}
  #for ((i=1; i<=MAX_RETRIES; i++)); do
  #    if check_nfs_server_status; then
  #        echo "NFS server is active."
  #        exit 0
  #    else
  #        echo "Attempt $i: NFS server is not active or SSH failed. Retrying in $RETRY_INTERVAL seconds..."
  #        sleep $RETRY_INTERVAL
  #    fi
  #done
  #
  # Need to Test this

  mkdir -p /opt/kvm
  echo "nfs15sp5.labs.suse.com:/opt/kvm /opt/kvm nfs4 defaults 0 0" >> /etc/fstab
  mount -a

  echo "maxdistance 16.0" >>/etc/chrony.conf
  echo "server 192.168.112.1" >>/etc/chrony.conf ## Need to pass in NTPSERVER Value probably
  systemctl restart chronyd
  systemctl enable --now chronyd

  crm cluster init -y -i eth1
  sed -i 's/SBD_DELAY_START=no/SBD_DELAY_START=yes/' /etc/sysconfig/sbd
  
  systemctl enable sbd
  crm cluster restart
  sleep 5
  touch /opt/kvm/cluster-is-initialized


  ## script something like this: crm_mon -1 -n | grep -i 'online:' | grep -q 'kvm-node3' && echo "The comm
  ## and was successful." || echo "The command failed."

  zypper install -y -t pattern kvm_server kvm_tools
  mkdir -p /opt/kvm/base-image /opt/kvm/images /opt/kvm/XML /opt/kvm/crm
  systemctl enable --now libvirtd
  virsh net-autostart default
  virsh net-start default

  ## POST SETUP NOTES
  # wget -O /opt/kvm/base-image/SLE-Micro-5.5-DVD-x86_64-GM-Media1.iso https://updates.suse.com/SUSE/Products/SLE-Micro/5.5/x86_64/iso/SLE-Micro-5.5-DVD-x86_64-GM-Media1.iso?yR2RRNS_dRlOLOG1D95Ba-t1WoG28SRSWRVoCfR0jfiH8IYRLmNo9SWWZq8qDDzgS--BiOTiZLdkg95Dy7iaIico-pEhhdbokCqujrO7STxtZCIQ_R1jHs756eD0HlkjsNIBK7kS0S56QgfRKyHZ6olMfdI3TG7dtgW2yafZOjPBSmiOMCRN4Q
  # failed for some reason, copied over something else:
  # Ran this: virt-install --name slem54-test --memory 1024 --vcpus 1 --disk path=/opt/kvm/images/SLE-Micro.x86_64-5.4.0-Default-GM.raw,size=10,format=qcow2 --os-variant slem5.4 --network default --import --noautoconsole
  # virsh destroy slem54-test ## You can do this more gracefully, just for quick testing
  # virsh dumpxml --domain slem54-test > /opt/kvm/XML/slem54-test.xml
  # virsh autostart --disable slem54-test
  #  
  # Create the primitive file in /opt/kvm/crm/
  ## /opt/kvm/crm/crm-slem54-test.txt
  # primitive slem54-test VirtualDomain \
  #  params config="/opt/kvm/XML/slem54-test.xml" remoteuri="qemu+ssh://%n/system" \
  #  meta allow-migrate=true \
  #  op monitor timeout=30s interval=10s
  
  ## /opt/kvm/crm/crm-defaults.txt
  ## 
  #rsc_defaults rsc-options: \
  #        resource-stickiness=1 \
  #        migration-threshold=3 \
  #        failure-timeout=60s
  
  ## /opt/kvm/crm/crm-stonith.txt
  # property cib-bootstrap-options: \
  #        have-watchdog=true \
  #        stonith-enabled=true \
  #        stonith-timeout=35 \
  #        stonith-watchdog-timeout=10

  # crm configure load update /opt/kvm/crm/crm-<FILE>.txt
  # Load the vm

  # Run these tests: https://documentation.suse.com/sle-ha/15-SP5/single-html/SLE-HA-administration/#sec-ha-virtualization-testing
  # Run these tests: https://documentation.suse.com/sle-ha/15-SP5/single-html/SLE-HA-administration/#sec-ha-storage-protect-test
  # Run tests on all nodes
  # Colocations? If you need two nodes to be on different machines. 
  # Other questions?

fi

systemctl disable --now firewalld
sh -c 'echo root:linux | chpasswd'

echo -e "\nSystem $(hostname) Provisioning Complete" ## HOSTNAME NOT FOUND
