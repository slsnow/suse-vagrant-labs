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
SUSEConnect -p sle-module-desktop-applications/15.5/x86_64
SUSEConnect -p sle-module-development-tools/15.5/x86_64
SUSEConnect -p sle-module-python3/15.5/x86_64
SUSEConnect -p sle-module-containers/15.5/x86_64
SUSEConnect -p sle-module-legacy/15.5/x86_64

zypper install -y man man-pages-posix man-pages rsyslog vim-data aaa_base-extras wget zypper-log netcat
systemctl enable --now rsyslog
zypper install -y docker helm
zypper install -y -t pattern documentation enhanced_base yast2_basis
zypper patch -y
zypper patch -y
mandb -c
timedatectl set-timezone America/Denver

### ssh keys
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

## Make sure utils database is ready
MYSQL_PORT=3306
TIMEOUT=6    # 6 x 10 second sleeps
COUNTER=0

while false; do
    if  nc -zv "ranch-utils" "$MYSQL_PORT" | grep "succeeded" > /dev/null 2>&1; then
        echo "MySQL is up!"
        break
    else
        echo "Waiting for MySQL to start..."
        sleep 10  # wait for 10 seconds before re-checking
        COUNTER=$((COUNTER + 1))
        if [ $COUNTER -eq $TIMEOUT ]; then
            echo "Timeout reached. Exiting."
            exit 1
        fi
    fi
done

## K3s Setup
## https://ranchermanager.docs.rancher.com/how-to-guides/new-user-guides/kubernetes-cluster-setup/k3s-for-rancher

if hostname | grep 'rancher1'; then
    curl -sfL https://get.k3s.io | INSTALL_K3S_VERSION=v1.25.12+k3s1 sh -s - server --datastore-endpoint="mysql://root:vagrant@tcp(ranch-utils:3306)/rancherdatastore"
    scp /var/lib/rancher/k3s/server/token rancher2://tmp/rancher-token
fi    

if hostname | grep 'rancher2'; then
    while [ ! -f /tmp/rancher-token ]; do
        echo "Waiting for rancher1, k3s initialization to complete."
        sleep 10  # wait for 5 seconds before checking again
    done
    sleep 15
    curl -sfL https://get.k3s.io | INSTALL_K3S_VERSION=v1.25.12+k3s1 sh -s - server --datastore-endpoint="mysql://root:vagrant@tcp(ranch-utils:3306)/rancherdatastore" \
    --token "$(cat /tmp/rancher-token)"
fi 

## backup and store kubeconfig
mkdir -p /root/rancher-backup/
mkdir -p /root/.kube
cp /etc/rancher/k3s/k3s.yaml /root/rancher-backup/k3s.yaml-backup
cp /etc/rancher/k3s/k3s.yaml /root/.kube/config

## Install kubectl
curl -LO "https://dl.k8s.io/release/$(curl -L -s https://dl.k8s.io/release/stable.txt)/bin/linux/amd64/kubectl" -o /tmp/kubectl
install -o root -g root -m 0755 /tmp/kubectl /usr/local/bin/kubectl
/usr/local/bin/kubectl version

## Rancher Install
if hostname | grep 'rancher1'; then
    helm repo add rancher-latest https://releases.rancher.com/server-charts/latest
    /usr/local/bin/kubectl create namespace cattle-system
    /usr/local/bin/kubectl apply -f https://github.com/cert-manager/cert-manager/releases/download/v1.11.0/cert-manager.crds.yaml
    helm repo add jetstack https://charts.jetstack.io
    helm repo update
    helm install cert-manager jetstack/cert-manager --namespace cert-manager --create-namespace --version v1.11.0
    helm install rancher rancher-latest/rancher --namespace cattle-system --set hostname=$(hostname -f) --set replicas=1 --set bootstrapPassword=rancheradminpass
fi

echo -e "\nDeployment Complete"