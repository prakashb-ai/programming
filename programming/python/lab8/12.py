"""Write a function AMCount() in Python, which should read each character of a text file STORY.TXT, should count and display the occurance of alphabets A and M (including small cases a and m too)."""
def AMcount():
    file=open("notes.txt","r")
    data=file.read()
    counta=0
    countm=0
    for i in data:
        if i=='A' or i=='a':
            counta+=1
        elif i=='M' or i=='m':
            countm+=1
      
    file.close()
    print(counta)
    print(countm)
AMcount()