def count_word():
    file=open("notes.txt","r")
    count=0
    data=file.read()
    word=data.split()
    for i in word:
        if i=='The' and i=='the':
            count+=1
        print(count)
    file.close()
count_word()