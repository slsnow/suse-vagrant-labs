#! /bin/bash

sed -i 's/rpm.install.excludedocs = yes/rpm.install.excludedocs = no/' /etc/zypp/zypp.conf

#ip addr add $STATIC dev eth2
#ip route replace default via $GATEWAY dev eth2
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
SUSEConnect -p PackageHub/15.5/x86_64

zypper install -y man man-pages-posix man-pages rsyslog vim-data aaa_base-extras wget zypper-log
systemctl enable --now rsyslog
zypper install -y docker helm
zypper install -y -t pattern documentation enhanced_base yast2_basis
zypper patch -y
zypper patch -y
mandb -c
timedatectl set-timezone America/Denver

sysctl -w net.bridge.bridge-nf-call-iptables=1

## Ports https://ranchermanager.docs.rancher.com/getting-started/installation-and-upgrade/installation-requirements/port-requirements
## RKE2 setup

mkdir -p /etc/rancher/rke2

if hostname | grep ranch0; then
    cat > /etc/rancher/rke2/config.yaml << EOF
    token: my-shared-secret
    tls-san:
    - $(hostname -f)
EOF
fi

if hostname | grep 'ranch[12]'; then
    sleep 10
    cat > /etc/rancher/rke2/config.yaml << EOF
    server: ranch0.labs.suse.com
    token: my-shared-secret
    tls-san:
    - $(hostname -f)
EOF
fi 

curl -sfL https://get.rke2.io | sh -
systemctl enable --now rke2-server.service

curl -LO "https://dl.k8s.io/release/$(curl -L -s https://dl.k8s.io/release/stable.txt)/bin/linux/amd64/kubectl"
install -o root -g root -m 0755 kubectl /usr/local/bin/kubectl

