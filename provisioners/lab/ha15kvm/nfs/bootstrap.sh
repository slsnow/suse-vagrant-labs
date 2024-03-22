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

SUSEConnect -r $SLEREGCODE

zypper install -y man man-pages-posix man-pages rsyslog vim-data aaa_base-extras wget zypper-log
systemctl enable --now rsyslog
zypper install -y -t pattern documentation enhanced_base 
zypper patch -y
zypper patch -y
mandb -c
timedatectl set-timezone America/Denver


if [ $DEPLOYMENT == "fulldeploy-3node" ]; then
  echo "fulldeploy-3node"

  zypper install -y yast2-nfs-server nfs-kernel-server
  mkdir -p /opt/kvm
  touch /opt/kvm/test
  echo "/opt/kvm *(rw,sync,no_subtree_check,no_root_squash)" >> /etc/exports
  exportfs -ra
  systemctl enable --now nfs-server
  zypper in -y -t pattern documentation enhanced_base yast2_basis yast2_server
fi

systemctl disable --now firewalld 
sh -c 'echo root:nfspass | chpasswd'
echo "Finished deploying nfs_server ${DEPLOYMENT} configurations."

#echo -e "The NFS Server Address\n---"
#ip a |grep "inet " | grep -v 127 | awk '{print $2}' | rev | cut -c 4- | rev
#echo -e "Passwords\n---\nsuma - root:sumapass | admin:sumapass"
#echo -e "proxy - root:proxypass"
#echo -e "clients - root:linux"