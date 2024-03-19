#! /bin/bash

MACHINE=$1
DEPLOY=$2

echo "Deploying ${MACHINE} ${DEPLOY} configurations..."

if [ "$MACHINE" == "nfs15" ]; then
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
  zypper install -y yast2-nfs-server
  echo "${SUBNET}${N1IP} ha15n2.labs.suse.com ha15n1" >>/etc/hosts
  echo "${SUBNET}${N2IP} ha15n2.labs.suse.com ha15n2" >>/etc/hosts
  echo "${SUBNET}${N3IP} ha15n2.labs.suse.com ha15n3" >>/etc/hosts
  echo "${SUBNET}${NFS15IP} nfs15.labs.suse.com nfs15" >>/etc/hosts


  if [ "$DEPLOY" == "training" ]; then
    echo "training"
  elif [ "$DEPLOY" == "fulldeploy" ]; then

  else
    echo "Deployment not recognized."
  fi
else
  echo "Machine not recognized."
fi

echo "Finished deploying ${MACHINE} ${DEPLOY} configurations."
