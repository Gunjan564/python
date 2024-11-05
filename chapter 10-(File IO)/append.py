message="\nEverything is complicated"
f=open("file.txt","a")
f.write(message)
f.close()
# It will write the content at the last of the previously written content
#If file does not exist then append mode will create the file
