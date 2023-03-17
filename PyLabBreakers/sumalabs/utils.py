import os
import sys
import subprocess
import time
import yaml

# query_yes_no function - borrowed from here: https://code.activestate.com/recipes/577058/ or https://stackoverflow.com/questions/3041986/apt-command-line-interface-like-yes-no-input
def query_yes_no(question, default="yes"):
    """
    Ask a yes/no question via raw_input() and return their answer.
    Parameters
    ----------
    question : string
        is a string that is presented to the user.
    default : string
        is the presumed answer if the user just hits <Enter>.
        It must be "yes" (the default), "no" or None (meaning
        an answer is required of the user).
    Returns
    ------- 
    string:
        The "answer" return value is True for "yes" or False for "no".
    """
    valid = {"yes": True, "y": True, "ye": True,
             "no": False, "n": False}
    if default is None:
        prompt = " [y/n] "
    elif default == "yes":
        prompt = " [Y/n] "
    elif default == "no":
        prompt = " [y/N] "
    else:
        raise ValueError("invalid default answer: '%s'" % default)
    while True:
        sys.stdout.write(question + prompt)
        choice = input().lower()
        if default is not None and choice == '':
            return valid[default]
        elif choice in valid:
            return valid[choice]
        else:
            sys.stdout.write("Please respond with 'yes' or 'no' "
                             "(or 'y' or 'n').\n")

def set_working_dir(work_dir):
    try:
        os.chdir(work_dir)
    except FileNotFoundError:
        print("Directory: {0} does not exist".format(work_dir))
    except NotADirectoryError:
        print("{0} is not a directory".format(work_dir))
    except PermissionError:
        print("You do not have permissions to change to {0}".format(work_dir))

def add_line_to_file(line, file_path, debug=False):
    """
    Add a line to the specified file if it doesn't already exist.
    Parameters
    ----------
    file_path : string
        The path of the file where the line should be added.
    line : string
        The line to be added to the file.
    """
    with open(file_path, 'r+') as file:
        lines = file.readlines()
        if line + "\n" not in lines:
            if debug:
                print(f"Adding line to {file_path}: {line}")
            file.write(f"{line}\n")
        else:
            if debug:
                print(f"Line already exists in {file_path}: {line}")

def load_yaml_config(file_path):
    with open(file_path, 'r') as yaml_file:
        try:
            return yaml.safe_load(yaml_file)
        except yaml.YAMLError as e:
            print(f"Error loading YAML file: {e}")
            return None  

def remove_line_from_file(partial_line, file_path, debug=False):
    if not os.path.exists(file_path):
        if debug:
            print(f"{file_path} does not exist.")
        return

    with open(file_path, 'r') as file:
        lines = file.readlines()

    with open(file_path, 'w') as file:
        for line in lines:
            if partial_line not in line:
                file.write(line)
            elif debug:
                print(f"Removing line from {file_path}: {line.strip()}")                      