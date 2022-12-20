binary = input('enter a binary number:-')
dec=0
place=0

for i in reversed(binary):
    dec=dec+int(i)+pow(2,place)
    place+=1
print('decimal representation of binary is',binary,'is',dec)