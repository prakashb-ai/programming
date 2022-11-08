text=input('enter a string:-')
vowel_count=0
vowels='aeiouAEIOU'
for ch in text:
    if ch in vowels:
        vowel_count+=1
print('the number of vowels are :-',vowel_count)