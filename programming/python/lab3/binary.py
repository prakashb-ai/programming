number=int(input('enter the number :-'))
binary=0
place=1
n=number
while n>0:
    remainder=int(n%2)
    binary=binary+remainder*place
    place=place*10
    n=n/2
print('binary number of representation is :-',binary)
