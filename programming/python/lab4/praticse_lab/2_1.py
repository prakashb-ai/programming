lower=upper=space=digit=0
string=input('enter a string:-')
for ch in string:
    if ch.isupper():
        upper+=1
    elif ch.islower():
        lower+=1
    elif ch.isdigit():
        digit+=1
    elif ch==' ':
        space+=1
print('the number of upper case are:-',upper)
print('the number of lower case are:-',lower)
print('the number of digits case are:-',digit)
print('the number of space case are:-',space)