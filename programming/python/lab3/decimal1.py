binary=input('enter a number')
decimal=0
place=0
for i in reversed(binary):
    decimal=decimal + int(i)*pow(2,place)
    place=place+1
print('decimal representation of binary is ',binary,"is",decimal)