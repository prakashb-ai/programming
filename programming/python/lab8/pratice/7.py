def count_words():
    file=open("article.txt","r")
    count=0
    data=file.read()
    word=data.split()
    for i in word:
        if i[-1]=='e':
            count+=1
        print(count)
    file.close()
count_words()