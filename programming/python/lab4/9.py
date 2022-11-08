def inserting_string_middle(str,word):
    return str[:2]+word+str[2:]
str=input('enter a symbol:-')
word=input('enter a word:-')
print(inserting_string_middle(str,word))