#! /bin/bash

sed -i 's/rpm.install.excludedocs = yes/rpm.install.excludedocs = no/' /etc/zypp/zypp.conf

#ip addr add $STATIC dev eth2
#ip route replace default via $GATEWAY dev eth2
sed -i "s/\$SUBNET/${SUBNET}/g" /tmp/hosts
cp /tmp/hosts /etc/hosts

rpm -e --nodeps sles-release
SUSEConnect -p SLES_SAP/15.5/x86_64 -r $SAPREGCODE
SUSEConnect -p sle-module-basesystem/15.5/x86_64
SUSEConnect -p sle-module-desktop-applications/15.5/x86_64
SUSEConnect -p sle-module-server-applications/15.5/x86_64
SUSEConnect -p sle-ha/15.5/x86_64 -r $SAPREGCODE
SUSEConnect -p sle-module-sap-applications/15.5/x86_64
SUSEConnect -p PackageHub/15.5/x86_64

zypper install -y man man-pages-posix man-pages rsyslog vim-data aaa_base-extras wget zypper-log netcat
systemctl enable --now rsyslog

zypper install -y -t pattern documentation enhanced_base yast2_basis
zypper patch -y
zypper patch -y
mandb -c
timedatectl set-timezone America/Denver

## Trento Installation

zypper in -y trento-server-installer apparmor-parser jq yq
install-trento-server -w trentopass

# Copy Client register script

cp /tmp/trento-client-configure.sh /root/
cp /tmp/trento-client-configure.sh /etc/trento/