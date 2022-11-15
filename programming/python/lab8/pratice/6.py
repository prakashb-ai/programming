def count_words():
    file=open("article.txt","r")
    count=0
    data=file.read()
    word=data.split()
    if i in word:
        if i=='this' or i=='these':
            count+=1
        print(count)
    file.close()
count_words()