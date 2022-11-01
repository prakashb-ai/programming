pos,neg,zero=0,0,0
choice='y'
while choice == 'y':
    num=int(input('enter any integer'))
    if num>0:
        print('postive integer')
        pos+=1
    elif num==0:
        print('neg interger')
        zero+=1
    print('do u want to continue')
    choice=input()
    print('zer',pos)
