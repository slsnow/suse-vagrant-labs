#! /bin/bash

MACHINE=$1
DEPLOY=$2

echo "Deploying ${MACHINE} ${DEPLOY} configurations..."

if [ "$MACHINE" == "kvmn3" ]; then
  SUSEConnect --cleanup
  rpm -e --nodeps sles-release
  SUSEConnect -p $SAPPRODUCT -r $SAPREGCODE
  SUSEConnect -p sle-module-basesystem/15.5/x86_64
  SUSEConnect -p sle-module-desktop-applications/15.5/x86_64
  SUSEConnect -p sle-module-server-applications/15.5/x86_64
  SUSEConnect -p sle-ha/15.5/x86_64 -r $SAPREGCODE
  SUSEConnect -p sle-module-sap-applications/15.5/x86_64

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
  zypper install -y nfs-client
  zypper install -y -t pattern ha_sles

  echo "${SUBNET}${N1IP} kvmn1.labs.suse.com kvmn1" >>/etc/hosts
  echo "${SUBNET}${N2IP} kvmn2.labs.suse.com kvmn2" >>/etc/hosts
  echo "${SUBNET}${NFS15IP} kvmnfs.labs.suse.com kvmnfs" >>/etc/hosts
  
  if [ "$DEPLOY" == "training" ]; then
    echo "training"
  elif [ "$DEPLOY" == "fulldeploy" ]; then
    echo "fulldeploy"
    echo "softdog" > /etc/modules-load.d/watchdog.conf
    systemctl restart systemd-modules-load
    sed -i 's/use_lvmlockd = 0/use_lvmlockd = 1/' /etc/lvm/lvm.conf
    systemctl enable --now lvmlockd
    mkdir /shared
    mkdir /data
  else
    echo "Deployment not recognized."
  fi
else
  echo "Machine not recognized."
fi

echo "Finished deploying ${MACHINE} ${DEPLOY} configurations."
