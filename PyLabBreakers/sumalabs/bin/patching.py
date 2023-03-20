import os
import utils
import time
import socket
import subprocess
import yaml
import sys
from alive_progress import alive_bar

silencer = ' > /dev/null 2>&1'
bar_type = "vertical"

def lab1():
    if utils.query_yes_no("Are you sure?", default='no'):
        print("\nPatching scenario, lab1 - Loading.\n")
        client_to_break = "client1"
        channel_to_remove = "sle-module-basesystem15-sp3-updates-x86_64"
        cmd = f'spacecmd -y -- system_removechildchannels {client_to_break} {channel_to_remove}'
        
        try:
            subprocess.run(cmd, shell=True, check=True, text=True)
            print("\nPatching scenario, lab1 - Ready\n========================")
            print("From the webUI, try to apply patches on the system client1.")
            input("\n\n\nPress ENTER to continue...")
        except subprocess.CalledProcessError as e:
            print(f"Error: {e.output}")
            print("An error occurred while loading patching scenario, lab 1.")
            sys.exit(1)
    else:
        print(" ")

def lab2():
    if utils.query_yes_no("Are you sure?", default='no'):
        print("\nPatching scenario, lab2 - Loading.\n")
        client_to_break = "client2"
        cmd = f'ssh {client_to_break} "zypper al kernel*" {silencer}'

        try:
            subprocess.run(cmd, shell=True, check=True, text=True)
            print("\nPatching scenario, lab2 - Ready\n========================")
            print("From the webUI, try to apply patches on the system client2.")
            input("\n\n\nPress ENTER to continue...")
        except subprocess.CalledProcessError as e:
            print(f"Error: {e.output}")
            print("An error occurred while loading patching scenario, lab 2.")
            sys.exit(1)
    else:
        print(" ")

def lab3():
    if utils.query_yes_no("Are you sure?", default='no'):
        print("\nPatching scenario, lab3 - Loading.\n")
        client_to_break = "client3"
        cmd1 = f'ssh {client_to_break} "bash -c \'exec -a zypper sleep 1000000\' &" {silencer}'
        cmd2 = f'ssh {client_to_break} "pidof zypper > /var/run/zypp.pid" {silencer}'

        try:
            subprocess.run(cmd1, shell=True, check=True, text=True)
            subprocess.run(cmd2, shell=True, check=True, text=True)
            print("\nPatching scenario, lab3 - Ready\n========================")
            print("From the webUI, try to apply patches on the system client3.")
            input("\n\n\nPress ENTER to continue...")
        except subprocess.CalledProcessError as e:
            print(f"Error: {e.output}")
            print("An error occurred while loading patching scenario, lab 3.")
            sys.exit(1)
    else:
        print(" ")

def lab4(debug=False):
    if utils.query_yes_no("Are you sure?", default='no'):
        print("\nPatching scenario, lab4 - Loading. Please wait, this could take a minute.\n")
        cmd1 = "zypper in -y --oldpackage salt-master-3002.2-150300.53.7.2 salt-3002.2-150300.53.7.2 python3-salt-3002.2-150300.53.7.2 salt-api-3002.2-150300.53.7.2 salt-bash-completion-3002.2-150300.53.7.2 salt-minion-3002.2-150300.53.7.2.x86_64"
        cmd2 = "spacewalk-service restart"

        try:
            subprocess.run(cmd1, shell=True, check=True, text=True, stderr=subprocess.STDOUT if debug else subprocess.DEVNULL)
            subprocess.run(cmd2, shell=True, check=True, text=True, stderr=subprocess.STDOUT if debug else subprocess.DEVNULL)
            print("\nPatching scenario, lab4 - Ready\n========================")
            print("Try to apply patches to the system client4.")
            input("\n\n\nPress ENTER to continue...")
        except subprocess.CalledProcessError as e:
            print(f"Error: {e.output}")
            print("An error occurred while loading patching scenario, lab 4.")
            sys.exit(1)
    else:
        print(" ")

def patching(args):
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