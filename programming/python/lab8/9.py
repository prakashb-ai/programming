"""A text file named "matter.txt" contains some text, which needs to be displayed such that every next character is separated by a symbol "#". Write a function definition for hash_display() in Python that would display the entire content of the file matter.txt in the desired format."""
def count_hash():
    file=open("matter.txt","r")
    data=file.read()
    for letter in data:
        print(letter,end="")
    file.close()
count_hash()