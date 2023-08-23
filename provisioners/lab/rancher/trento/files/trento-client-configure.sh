#!/bin/bash

# Default values for variables
SERVER_HOSTNAME="trento-sap1.labs.suse.com"
API_KEY=""

# Function to display help
display_help() {
    echo "Usage: $0 [options]"
    echo
    echo "Options:"
    echo "  --server-hostname=SERVER    Set the server hostname. Default is $SERVER_HOSTNAME."
    echo "  --api-key=APIKEY            Set the API key. Default is the given static API key."
    echo "  -h, --help                  Display this help message."
    echo
    exit 1
}

# Parse command line arguments
for i in "$@"
do
case $i in
    --server-hostname=*)
    SERVER_HOSTNAME="${i#*=}"
    shift
    ;;
    --api-key=*)
    API_KEY="${i#*=}"
    shift
    ;;
    -h|--help)
    display_help
    exit 0
    ;;
    *)
    # Unknown option
    echo "Error: Unknown option: $i"
    display_help
    exit 1
    ;;
esac
done

# Install the agent package
zypper in -y trento-agent
cp /etc/trento/agent.yaml /etc/trento/agent.yaml-old

# Populate the config file with provided/defaults
cat > /etc/trento/agent.yaml <<EOF
server-url: http://${SERVER_HOSTNAME}
api-key: ${API_KEY}
facts-service-url: amqp://trento:trento@${SERVER_HOSTNAME}:5672
EOF

# Add /etc/hosts entry of the server on the client
echo "192.168.50.43   trento-sap1.labs.suse.com       trento-sap1" >> /etc/hosts

# Enable and start the trento-agent
systemctl enable --now trento-agent