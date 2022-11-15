"""Write a function in Python to count uppercase character in a text file."""
def count_letter():
    file=open("article.txt")
    count=0
    data=file.read()
    for letter in data:
        if data.isupper():
            count+=1
    print(count)
    file.close()
count_letter()

