import os
import utils
import time
import socket
import subprocess
import yaml
from alive_progress import alive_bar

silencer = ' > /dev/null 2>&1'
bar_type = "vertical"

def lab1(debug=False):
    if utils.query_yes_no("Are you sure?", default='no'):
        print("\nRegistration scenario, lab1 - Loading.\n")
        with alive_bar(unknown=bar_type) as bar:
            time.sleep(1)
            
            config = utils.load_yaml_config("/usr/share/rhn/sumalabs/conf.yaml")
            if config is None:
                print("Error loading configuration. Exiting.")
                return

            client_password = config["clientpass"]
            client2break = "client1"

            ssh_result = subprocess.run(["ssh", client2break, "echo", "SSH_OK"], capture_output=True)
            
            if ssh_result.returncode != 0:
                if debug:
                    print(f"SSH connection to {client2break} failed. Attempting to copy SSH keys.")
                utils.copy_ssh_keys(client2break, client_password, debug)

            cmd1 = f'ssh {client2break} "rm -rf /etc/salt /etc/venv-salt-minion"'
            cmd2 = f'ssh {client2break} "mkdir -p /etc/salt -p /etc/venv-salt-minion/"'
            cmd3 = f'ssh {client2break} "chattr +i /etc/venv-salt-minion"'
            cmd4 = f'ssh {client2break} "chattr +i /etc/salt"'

            subprocess.run(cmd1.split(), capture_output=True)
            subprocess.run(cmd2.split(), capture_output=True)
            time.sleep(1)
            subprocess.run(cmd3.split(), capture_output=True)
            subprocess.run(cmd4.split(), capture_output=True)
            time.sleep(1)

        print("\nRegistration scenario, lab1 - Ready\n========================")
        print("Try registering client1 to SUSE Manager.")
        input("\n\n\nPress ENTER to continue...")
    else:
        print(" ")

def lab2(debug=False):
    if utils.query_yes_no("Are you sure?", default='no'):
        print("\nRegistration scenario, lab2 - Loading.\n")
        with alive_bar(unknown=bar_type) as bar:
            time.sleep(1)
            
            config = utils.load_yaml_config("/usr/share/rhn/sumalabs/conf.yaml")
            if config is None:
                print("Error loading configuration. Exiting.")
                return

            client_password = config["clientpass"]
            client2break = "client2"

            ssh_result = subprocess.run(["ssh", client2break, "echo", "SSH_OK"], capture_output=True)
            
            if ssh_result.returncode != 0:
                if debug:
                    print(f"SSH connection to {client2break} failed. Attempting to copy SSH keys.")
                utils.copy_ssh_keys(client2break, client_password, debug)

            cmd1 = f'zypper in -y salt-minion'
            cmd2 = f'cp /etc/salt/minion /tmp/minion'
            cmd3 = f'sed -i "/^#master_port: 4506/a master_port: 45506" /tmp/minion'
            cmd4 = f'ssh {client2break} "mkdir -p /etc/salt/ -p /etc/venv-salt-minion/"'
            cmd5 = f'rsync -r /tmp/minion {client2break}:/etc/salt/minion'
            cmd6 = f'rsync -r /tmp/minion {client2break}:/etc/venv-salt-minion/minion'
            cmd7 = f'rm -rf /tmp/minion'

            subprocess.run(cmd1.split(), capture_output=True)
            subprocess.run(cmd2.split(), capture_output=True)
            subprocess.run(cmd3.split(), capture_output=True)
            subprocess.run(cmd4.split(), capture_output=True)
            time.sleep(1)
            subprocess.run(cmd5.split(), capture_output=True)
            subprocess.run(cmd6.split(), capture_output=True)
            subprocess.run(cmd7.split(), capture_output=True)
            time.sleep(1)

        print("\nRegistration scenario, lab2 - Ready\n========================")
        print("Try to register the system client2 to SUSE Manager.")
        input("\n\n\nPress ENTER to continue...")
    else:
        print(" ")

def lab3(debug=False):
    if utils.query_yes_no("Are you sure?", default='no'):
        print("\nRegistration scenario, lab3 - Loading.\n")
        with alive_bar(unknown=bar_type) as bar:
            time.sleep(1)

            config = utils.load_yaml_config("/usr/share/rhn/sumalabs/conf.yaml")
            if config is None:
                print("Error loading configuration. Exiting.")
                return

            client_password = config["clientpass"]
            client2break = "client3"

            ssh_result = subprocess.run(["ssh", client2break, "echo", "SSH_OK"], capture_output=True)

            if ssh_result.returncode != 0:
                if debug:
                    print(f"SSH connection to {client2break} failed. Attempting to copy SSH keys.")
                utils.copy_ssh_keys(client2break, client_password, debug)

            subprocess.run("cp /etc/sysconfig/proxy /tmp/proxy".split(), capture_output=True)
            subprocess.run('sed -i s/no/yes/g /tmp/proxy'.split(), capture_output=True)
            subprocess.run('sed -i s/HTTPS_PROXY=""/HTTPS_PROXY="192.168.0.1"/g /tmp/proxy'.split(), capture_output=True)

            with open("/tmp/.bashrc", "w") as bash_file:
                bash_file.writelines(['export https_proxy="http://192.168.0.1"'])

            subprocess.run(f'scp /tmp/proxy {client2break}:/etc/sysconfig/proxy'.split(), capture_output=True)
            subprocess.run(f'scp /tmp/.bashrc {client2break}:/root/.bashrc'.split(), capture_output=True)

            rebootcmd = f'ssh {client2break} reboot'
            subprocess.run(rebootcmd.split(), capture_output=True)

            subprocess.run("rm /tmp/proxy /tmp/.bashrc".split(), capture_output=True)
            time.sleep(20)

        print("\nRegistration scenario, lab3 - Ready\n========================")
        print("Wait for client3 to reboot. Then try to register the system to SUSE Manager.")
        input("\n\n\nPress ENTER to continue...")
    else:
        print(" ")

def lab4(debug=False):
    if utils.query_yes_no("Are you sure?", default='no'):
        print("\nRegistration scenario, lab4 - Loading.\n")
        with alive_bar(unknown=bar_type) as bar:
            time.sleep(1)
            
            config = utils.load_yaml_config("/usr/share/rhn/sumalabs/conf.yaml")
            if config is None:
                print("Error loading configuration. Exiting.")
                return

            client_password = config["clientpass"]
            client2copy = "client1"
            client2break = "client4"

            ssh_result = subprocess.run(["ssh", client2break, "echo", "SSH_OK"], capture_output=True)
            
            if ssh_result.returncode != 0:
                if debug:
                    print(f"SSH connection to {client2break} failed. Attempting to copy SSH keys.")
                utils.copy_ssh_keys(client2break, client_password, debug)

            cmd1 = f'scp {client2copy}:/etc/machine-id /tmp/machine-id'
            cmd2 = f'scp -r {client2copy}:/etc/salt/ /tmp/'
            cmd3 = f'scp -r {client2copy}:/etc/venv-salt-minion /tmp/'
            cmd4 = f'scp /tmp/machine-id {client2break}:/etc/machine-id'
            cmd5 = f'scp /tmp/machine-id {client2break}:/var/lib/dbus/machine-id'
            cmd6 = f'ssh {client2break} "mkdir -p /etc/salt/ -p /etc/venv-salt-minion/"'
            cmd7 = f'scp -r /tmp/salt/* {client2break}:/etc/salt/'
            cmd8 = f'scp -r /tmp/salt/* {client2break}:/etc/venv-salt-minion/'

            subprocess.run(cmd1.split(), capture_output=True)
            subprocess.run(cmd2.split(), capture_output=True)
            subprocess.run(cmd3.split(), capture_output=True)
            subprocess.run(cmd4.split(), capture_output=True)
            subprocess.run(cmd5.split(), capture_output=True)
            subprocess.run(cmd6.split(), capture_output=True)
            subprocess.run(cmd7.split(), capture_output=True)

            with open("/tmp/salt/minion_id", "w") as minion_id_file:
                minion_id_file.write("client1.sumatrain.com")

            subprocess.run(cmd8.split(), capture_output=True)
            subprocess.run(["rm", "-r", "/tmp/salt", "/tmp/machine-id"], capture_output=True)
            time.sleep(1)

        print("\nRegistration scenario, lab4 - Ready\n========================")
        print("Try to register client4 to SUSE Manager.")
        print("Make sure that the registration for client1 is still valid.")
        input("\n\n\nPress ENTER to continue...")
    else:
        print(" ")

def full(debug=False):
    lab1(debug=debug)
    lab2(debug=debug)
    lab3(debug=debug)
    lab4(debug=debug)

def reset(debug=False):
    if utils.query_yes_no("Are you sure you want to reset?", default='no'):
        print("\nResetting registration labs...\n")
        with alive_bar(unknown=bar_type) as bar:
            time.sleep(1)
            
            config = utils.load_yaml_config("/usr/share/rhn/sumalabs/conf.yaml")
            if config is None:
                print("Error loading configuration. Exiting.")
                return

            client_password = config["clientpass"]
            clients = ["client1", "client2", "client3", "client4"]

            for client in clients:
                ssh_result = subprocess.run(["ssh", client, "echo", "SSH_OK"], capture_output=True)
                if ssh_result.returncode != 0:
                    if debug:
                        print(f"SSH connection to {client} failed. Attempting to copy SSH keys.")
                    utils.copy_ssh_keys(client, client_password, debug)

                cmd1 = f'ssh {client} "rm -rf /etc/salt /etc/venv-salt-minion"'
                cmd2 = f'ssh {client} "chattr -i /etc/venv-salt-minion /etc/salt" 2>/dev/null || true'
                cmd3 = f'ssh {client} "rm -f /etc/sysconfig/proxy /root/.bashrc"'

                
                subprocess.run(cmd1.split(), capture_output=True)
                subprocess.run(cmd2.split(), capture_output=True)
                subprocess.run(cmd3.split(), capture_output=True)

                rebootcmd = f'ssh {client} reboot'
                subprocess.run(rebootcmd.split(), capture_output=True)

            time.sleep(1)

        print("\nRegistration labs reset complete\n========================")
        input("\n\n\nPress ENTER to continue...")
    else:
        print(" ")


def registration(args, debug=False):
    if args.lab1:
        lab1()
    elif args.lab2:
        lab2() 
    elif args.lab3:
        lab3() 
    elif args.lab4:
        lab4() 
    elif args.full:
        full()
    elif args.reset:
        reset() 