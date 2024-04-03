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
  zypper in -y nfs-client chrony
  
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

  ## Check if /opt/kvm/cluster-is-initialized is there
  
  sed -i 's/SBD_DELAY_START=no/SBD_DELAY_START=yes/' /etc/sysconfig/sbd
  systemctl enable sbd
  crm cluster join -y -i eth1 -c kvm-node1
  
  zypper install -y -t pattern kvm_server kvm_tools
  systemctl enable --now libvirtd
  virsh net-autostart default
  virsh net-start default


fi

systemctl disable --now firewalld
sh -c 'echo root:linux | chpasswd'

echo -e "\nSystem $(hostname) Provisioning Complete"
