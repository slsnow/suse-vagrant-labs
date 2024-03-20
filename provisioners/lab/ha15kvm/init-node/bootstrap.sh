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


rpm -e --nodeps sles-release
SUSEConnect -p SLES_SAP/15.5/x86_64 -r $SAPREGCODE
SUSEConnect -p sle-module-basesystem/15.5/x86_64
SUSEConnect -p sle-module-desktop-applications/15.5/x86_64
SUSEConnect -p sle-module-server-applications/15.5/x86_64
SUSEConnect -p sle-ha/15.5/x86_64 -r $SAPREGCODE
SUSEConnect -p sle-module-sap-applications/15.5/x86_64

if [ $DEPLOYMENT == "fulldeploy-3node" ]; then
  echo "fulldeploy-3node"

systemctl disable --now firewalld
sh -c 'echo root:linux | chpasswd'

echo -e "\nSystem $(hostname) Provisioning Complete"