num = int(input('enter the number:-'))
temp=num
rev=0

while temp>0:
    digit=temp%10
    rev=digit+rev*10
    temp=int(temp/10)

if num == rev:
    print('palindrome')
else:
    print('not a palindrome')