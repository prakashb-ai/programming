def line_count():
    file=open("story.txt","r")
    count=0
    for i in file:
        if i[0]  not in 'T':
            count+=1
    file.close()
    print('no of line not starting T')
line_count()