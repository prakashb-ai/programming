length=lower=upper=digit=False
password=input('enter a password:-')
if len(password)>=8:
    length=True
    for letter in password:
        if letter.islower():
            lower=True
        elif letter.isupper():
            upper=True
        elif letter.isdigit():
            digit=True
if length and upper and lower and digit:
    print('the password is valid')
else:
    print('the password is not valid')