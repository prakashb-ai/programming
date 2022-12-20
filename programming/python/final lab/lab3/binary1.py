num=int(input('enter a number:-'))
binary=0
place=1

while num>0:
    rem=int(num%2)
    binary=binary+rem*place
    place=place*10
    num=num/2
print('binary number is ',binary)