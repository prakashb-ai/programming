def readFile():
    file=open("prakash.txt","r")
    for line in file:
        print(line,end="")
    file.close()
readFile()