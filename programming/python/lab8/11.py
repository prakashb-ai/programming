def JTOI():
    file=open("words.txt","r")
    data=file.read()
    for letter in data:
        if letter=='J':
            print('I',end="")
        else:
            print(letter,end="")
    file.close()
JTOI()