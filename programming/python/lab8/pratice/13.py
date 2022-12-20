import pickle
def createFile():
    file=open("book.data","ab")
    Bookno=int(input('enter a book number:-'))
    Book_name=input('enter a book name:-')
    Author=input('enter a author name:-')
    price=int(input('enter a price:-'))
    record=[Bookno,Book_name,Author,price]
    pickle.dump(record,file)
    file.close()

def countRec(Author):
    file=open("book.data","rb")
    count=0
    try:
        while True:
            record=pickle.load(file)
            if record[2]==Author:
                count+=1
    except EOFError:
        pass
    return count
    file.close()

def testProgram():
    while True:
        createFile()
        choice=input('Add more record y/n:-')
        if choice in 'Nn':
            break
    Author=input('enter author name to search:')
    n=countRec(Author)
    print('no of books are',n)
testProgram()