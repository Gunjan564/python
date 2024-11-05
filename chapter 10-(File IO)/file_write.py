message="Everything is beautiful"
f=open("file.txt","w")
f.write(message)
f.close()
# It will write the content from the start by overwriting the original content
#If file does not exist then write mode will create the file