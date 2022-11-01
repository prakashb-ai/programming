num=int(input('enter a number '))
binary=0
place=1
n=num
while n>0:
    remainder=int(n%2)
    binary=binary+remainder*place
    place=place*10
    n=n/2
print('binary number is ',binary)