num=int(input('enter the number:-'))
temp=num
rev_no=0
while temp>0:
    digit=temp%10
    rev_no=digit+rev_no*10
    temp=int(temp/10)
print('the reverse number is ',rev_no)
    