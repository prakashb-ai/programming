def isVowel(letter):
    if letter in 'aeiouAEIOU':
        return True
    else:
        return False

def main():
    count=0
    word=input('enter a word:-')
    for i in word:
        if isVowel(i):
            count+=1
    print('the number of vowels in word',count)
main()