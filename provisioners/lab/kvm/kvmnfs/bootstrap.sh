#! /bin/bash

MACHINE=$1
DEPLOY=$2

echo "Deploying ${MACHINE} ${DEPLOY} configurations..."

if [ "$MACHINE" == "kvmnfs" ]; then
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


  

  echo "${SUBNET}${N1IP} kvmn1.labs.suse.com kvmn1" >>/etc/hosts
  echo "${SUBNET}${N2IP} kvmn2.labs.suse.com kvmn2" >>/etc/hosts
  echo "${SUBNET}${N3IP} kvmn3.labs.suse.com kvmn3" >>/etc/hosts


  

  if [ "$DEPLOY" == "training" ]; then
    echo "training"

  elif [ "$DEPLOY" == "fulldeploy" ]; then
    echo "fulldeply"
    zypper install -y yast2-nfs-server nfs-kernel-server
    mkdir -p /opt/kvm
    echo "/opt/kvm *(rw,sync,no_subtree_check,no_root_squash)" >> /etc/exports
    systemctl enable --now nfs-server
    exportfs -ra
    zypper in -y -t pattern documentation enhanced_base yast2_basis yast2_server
    
  else
    echo "Deployment not recognized."
  fi
else
  echo "Machine not recognized."
fi

echo "Finished deploying ${MACHINE} ${DEPLOY} configurations."
