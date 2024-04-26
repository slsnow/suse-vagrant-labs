#! /bin/bash

sed -i 's/rpm.install.excludedocs = yes/rpm.install.excludedocs = no/' /etc/zypp/zypp.conf

sed -i "s/\$SUBNET/${SUBNET}/g" /tmp/hosts
cp /tmp/hosts /etc/hosts

SUSEConnect -r $SLEREGCODE
zypper install -y --oldpackage suseconnect-ng-1.1.0~git2.f42b4b2a060e-150400.3.13.1
SUSEConnect --de-register
SUSEConnect --cleanup
rpm -e --nodeps sles-release
SUSEConnect -r $SUMAPROXYREGCODE -p SUSE-Manager-Proxy/4.3/x86_64
SUSEConnect -p sle-module-basesystem/15.4/x86_64
SUSEConnect -p sle-module-server-applications/15.4/x86_64
SUSEConnect -p sle-module-suse-manager-proxy/4.3/x86_64

zypper install -y man man-pages-posix man-pages rsyslog vim-data aaa_base-extras wget zypper-log
systemctl enable --now rsyslog
zypper in -y -t pattern suma_proxy documentation enhanced_base yast2_basis yast2_server
zypper patch -y
zypper patch -y
mandb -c

sh -c 'echo root:proxypass | chpasswd'
