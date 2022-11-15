"""Write a function in Python to read lines from a text file "notes.txt", to find and display the occurrence of the word "the".

For example: If the content of the file is:
"India is the fastest-growing economy. India is looking for more investments around the globe. The whole world is looking at India as a great market. Most of the Indians can foresee the heights that India is capable of reaching."
"""


def count_words():
    file=open("note.txt","r")
    count=0
    data=file.read()
    words=data.split()
    for word in words:
        if word == 'The' and word =='the':
            count+=1
    print(count)
    file.close()
count_words()