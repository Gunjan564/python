import os

# Specify the directory path
directory_path = r'C:\Users\hp\Desktop\python\chapter 1-(Practice Set)'

# List the content of the directory
contents = os.listdir(directory_path)

# Print each item in the directory
for item in contents:print(item)