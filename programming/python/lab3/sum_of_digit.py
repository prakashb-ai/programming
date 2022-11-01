num=int(input('enter the number :-'))
temp=num
sums=0
while temp>0:
    digit=temp%10
    sums=sums+digit
    temp=int(temp/10)
print('the sum of digit:-',sums)