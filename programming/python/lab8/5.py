"""Write a function display_words() in python to read lines from a text file
"story.txt", and display those words, which are less than 4 characters."""
def display_words():
    file=open("poems.txt","r")
    data=file.read()
    words=data.split()
    for word in words:
        if len(word)<4:
            print(word,end="")
    file.close()
display_words()