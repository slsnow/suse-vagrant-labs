import os
import utils
import time
import socket
import subprocess
import yaml

def lab1(debug=False):
    lab_name = "mgr-sync lab1"
    if utils.query_yes_no("About to execute the lab scenario: " + lab_name + ". Do you want to proceed?", default='no'): 
        bar_title= "mgr-sync: lab1 - [Loading]"

        def task1():
            time.sleep(1)
            pass

        def task2():    
            if debug:
                print("Current content of /etc/hosts before adding lines:")
                with open("/etc/hosts", "r") as f:
                    print(f.read())

            line1 = "8.8.8.8    scc.suse.com        scc"
            line2 = "8.8.4.4    updates.suse.com    updates"
            pass

        def task3():
            utils.add_line_to_file(line1, "/etc/hosts", debug)
            if debug: 
                print(f"Adding line to /etc/hosts: {line1}")
            pass

        def task4():
            utils.add_line_to_file(line2, "/etc/hosts", debug)
            if debug:
                print(f"Adding line to /etc/hosts: {line2}\n\n")
            pass

        tasks = [task1,task2,task3,task4]
        utils.create_alive_bar(bar_title, tasks)

        print("\n{0}\n{1}\n{0}".format("-" * 35, "mgr-sync: lab1 - [Ready]"))
        print("\nInstructions:")
        print("- Go to the SUSE Manager WebUI.")
        print("- Refresh the product catalog from the SUSE Customer Center.")
    else:
        print(" ")

def lab2(debug=False):
    if utils.query_yes_no("Are you sure?", default='no'):
        print("\nLoading the mgr-sync scenario, lab2...\n")
        with alive_bar(unknown=bar_type) as bar:
            time.sleep(1)

            # Create a custom firewalld zone called 'block_scc'
            subprocess.run(["firewall-cmd", "--permanent", "--new-zone=block_scc"], capture_output=True)

            # Get the IP addresses for scc.suse.com
            dig_out = subprocess.run(["dig", "+short", "scc.suse.com"], capture_output=True, text=True).stdout.strip().split("\n")

            for ip in dig_out:
                # Add a rich rule to block traffic from the IP addresses of scc.suse.com
                if debug:
                    print(f"Blocking IP: {ip}")
                subprocess.run(["firewall-cmd", "--permanent", "--zone=block_scc", "--add-rich-rule='rule family=ipv4 source address={} drop'".format(ip)], capture_output=True)

            # Set the default zone to 'block_scc'
            subprocess.run(["firewall-cmd", "--set-default-zone=block_scc"], capture_output=True)

            # Reload firewalld to apply changes, with debug
            if debug:
                print("Firewalld status before reloading:")
                subprocess.run(["firewall-cmd", "--state"], capture_output=True)
            
            subprocess.run(["firewall-cmd", "--reload"], capture_output=True)
            
            if debug:
                print("Firewalld status after reloading:")
                subprocess.run(["firewall-cmd", "--state"], capture_output=True)

        print("\nmgr-sync scenario, lab2 - Ready\n========================")
        print("Go to the SUSE Manager WebUI and refresh the product catalog from the SUSE Customer Center")
        time.sleep(1)
        input("\n\n\nPress ENTER to continue...")
    else:
        print(" ")

def lab3(debug=False):
    config = utils.load_yaml_config("/usr/share/rhn/sumalabs/conf.yaml")
    if config is None:
        print("Error loading configuration. Exiting.")
        return

    sccorguser = config["sccorguser"]

    if utils.query_yes_no("Are you sure?", default='no'):
        print("\nLoading the mgr-sync scenario, lab3...\n")
        with alive_bar(unknown=bar_type) as bar:
            subprocess.run(["systemctl", "stop", "firewalld.service"], capture_output=True)
            subprocess.run(["spacecmd", "-u", "admin", "-p", "trainpass", "api", "--", "-A", sccorguser, "sync.content.deleteCredentials"], capture_output=True)
            time.sleep(1)
        print("\nmgr-sync scenario, lab3 - Ready\n========================")
        print("Go to the SUSE Manager WebUI and attempt to mirror a children product from SLES 15 SP2")
        time.sleep(1)
        input("\n\n\nPress ENTER to continue...")
    else:
        print(" ")

def lab4(debug=False):
    config = utils.load_yaml_config("/usr/share/rhn/sumalabs/conf.yaml")
    if config is None:
        print("Error loading configuration. Exiting.")
        return

    sccorguser = config["sccorguser"]
    sccemptyuser = config["sccemptyuser"]
    sccemptypass = config["sccemptypass"]

    if utils.query_yes_no("Are you sure?", default='no'):
        print("\nLoading the mgr-sync scenario, lab4...\n")
        with alive_bar(unknown=bar_type) as bar:
            subprocess.run(["spacecmd", "-u", "admin", "-p", "trainpass", "api", "--", "-A", sccorguser, "sync.content.deleteCredentials"], capture_output=True)
            subprocess.run(["spacecmd", "-u", "admin", "-p", "trainpass", "api", "--", "-A", f"{sccemptyuser},{sccemptypass},{sccemptypass}", "sync.content.addCredentials"], capture_output=True)
            time.sleep(1)
        print("\nmgr-sync scenario lab4 - Ready\n========================")
        print("Go to the SUSE Manager WebUI and attempt to mirror a children product from SLES 15 SP2")
        input("\n\n\nPress ENTER to continue...")
    else:
        print(" ")

def full(debug=False):
    print("Running the full scenario (lab1, lab2, lab3, and lab4)...\n")
    
    lab1(debug)
    lab2(debug)
    lab3(debug)
    lab4(debug)
    
    print("\nFull scenario completed.")        

def reset(debug=False):
    config = utils.load_yaml_config("/usr/share/rhn/sumalabs/conf.yaml")
    if config is None:
        print("Error loading configuration. Exiting.")
        return

    sccorguser = config["sccorguser"]
    sccorgpass = config["sccorgpass"]

    if utils.query_yes_no("Are you sure you want to reset all changes made by labs 1-4?", default='no'):
        print("\nResetting the mgr-sync labs...\n")
        with alive_bar(unknown=bar_type) as bar:
            time.sleep(1)

            # Lab 1 reset
            if debug:
                print("Current content of /etc/hosts before removing lines:")
                with open("/etc/hosts", "r") as f:
                    print(f.read())
            utils.remove_line_from_file(partial_line1, "/etc/hosts", debug)
            utils.remove_line_from_file(partial_line2, "/etc/hosts", debug)
            if debug:
                print("Current content of /etc/hosts after removing lines:")
                with open("/etc/hosts", "r") as f:
                    print(f.read())

            # Lab 2 reset
            dig_out = subprocess.run(["dig", "+short", "scc.suse.com"], capture_output=True, text=True).stdout.strip().split("\n")
            dig_out1 = dig_out[0]
            dig_out2 = dig_out[1]
            if debug:
                print(f"Removing firewall rule blocking IP: {dig_out1}")
            subprocess.run(["firewall-cmd", "--permanent", "--direct", "--remove-rule", "ipv4", "filter", "INPUT_direct", "0", "-s", dig_out1, "-j", "DROP"], capture_output=True)

            if debug:
                print(f"Removing firewall rule blocking IP: {dig_out2}")
            subprocess.run(["firewall-cmd", "--permanent", "--direct", "--remove-rule", "ipv4", "filter", "INPUT_direct", "0", "-s", dig_out2, "-j", "DROP"], capture_output=True)

            subprocess.run(["firewall-cmd", "--reload"], capture_output=True)

            # Lab 3 reset - firewalld will be kept off at the end
            # subprocess.run(["systemctl", "start", "firewalld.service"], capture_output=True)

            # Lab 4 reset
            subprocess.run(["spacecmd", "-u", "admin", "-p", "trainpass", "api", "--", "-A", f"{sccorguser},{sccorgpass},{sccorgpass}", "sync.content.addCredentials"], capture_output=True)

            time.sleep(1)
        print("\nmgr-sync labs reset complete\n========================")
        input("\n\n\nPress ENTER to continue...")
    else:
        print(" ")        

def mgrsync(args, debug=False):
    if args.lab1:
        lab1(debug)
    elif args.lab2:
        lab2(debug)
    elif args.lab3:
        lab3(debug)
    elif args.lab4:
        lab4(debug)
    elif args.full:
        full(debug)
    elif args.reset:
        reset(debug)                          