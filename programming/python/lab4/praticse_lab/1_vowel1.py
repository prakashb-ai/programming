string=input('enter a string:-')
vowel_count=0
vowels='aeiouAEIOU'
for ch in string:
    if ch in vowels:
        vowel_count+=1
print('the number of vowels in string are:-',vowel_count)