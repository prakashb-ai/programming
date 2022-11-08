text=input('enter a string :-')
upper=0
lower=0
digit=0
space=0

for ch in text:
    if ch.isupper():
        upper+=1
    elif ch.islower():
        lower+=1
    elif ch.isdigit():
        digit+=1
    elif ch == ' ':
        space+=1
print('the text of upper case is',upper)
print('the text of lower case is ',lower)
print('the text of digit case is ',digit)
print('the text of space case is ',space)