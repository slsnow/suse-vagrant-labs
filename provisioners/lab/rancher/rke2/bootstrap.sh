#! /bin/bash

sed -i 's/rpm.install.excludedocs = yes/rpm.install.excludedocs = no/' /etc/zypp/zypp.conf

#ip addr add $STATIC dev eth2
ip route replace default via $GATEWAY dev eth2
sed -i "s/\$SUBNET/${SUBNET}/g" /tmp/hosts
cp /tmp/hosts /etc/hosts

SUSEConnect -p SLES/15.5/x86_64 -r $SLEREGCODE
SUSEConnect -p sle-module-basesystem/15.5/x86_64
SUSEConnect -p sle-module-server-applications/15.5/x86_64
SUSEConnect -p sle-module-web-scripting/15.5/x86_64
SUSEConnect -p sle-module-desktop-applications/15.4/x86_64
SUSEConnect -p sle-module-development-tools/15.4/x86_64
SUSEConnect -p sle-module-python3/15.4/x86_64
SUSEConnect -p sle-module-containers/15.5/x86_64