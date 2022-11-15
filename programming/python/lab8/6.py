"""Write a function in Python to count the words "this" and 
"these" present in a text file "article.txt". [Note that the words "this" and "these" are complete words]"""

def count_words():
    file=open("article.txt","r")
    count=0
    data=file.read()
    words=data.split()
    for word in words:
        if word =='this' or word=='these':
            count+=1
    print(count)
    file.close()
count_words()
    