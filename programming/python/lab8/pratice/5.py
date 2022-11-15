def display_words():
    file=open("poems.txt","r")
    data=file.read()
    word=data.split()
    for i in word:
        if len(word)<4:
            print(word,end="")
    file.close()
display_words()