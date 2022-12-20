pos,neg,zero=0,0,0
choice='y'
while choice=='y':
    num=int(input('enter a number:-'))
    if num>0:
        print(num,'it is a postive number')
    elif num==0:
        print(num,'it is zero')
    else:
        print(num,'it is a negative number')