num= int(input('enter a number:-'))
n1=0
n2=1
count=0
if num<=0:
    print('enter a postive number:-')
elif num==1:
    print('n terms up to ',num)
    print(n1)
else:
    print('fibancci series is')
while count<num:
    print(n1)
    add=n1+n2
    n1=n2
    n2=add
    count=count+1