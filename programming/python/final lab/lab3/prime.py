num=int(input('enter a number'))
for i in range(2,num//2):
    if num%i==0:
        print('prime')
        break
    else:
        print('not prime')