num = int(input('enter a number:-'))
for i in range(1,6):
    for j in range(1,i+1):
        print(num,end=' ')
        num=num+1
    print()