text=input('enter a string:-')
newText=text[::-1]
if text == newText:
    print('string is palindrome')
else:
    print('string is not palindrome')