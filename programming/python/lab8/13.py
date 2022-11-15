"""A binary file "Book.dat" has structure [BookNo, Book_Name, Author, Price].
i. Write a user defined function createFile() to input data for a record and add to Book.dat.
ii. Write a function countRec(Author) in Python which accepts the Author name as parameter and count and return number 
of books by the given Author are stored in the binary file "Book.dat" """



import pickle

def createFile():
    file=open("book.data","ab")
    Bookno=int(input('enter a book number:-'))
    Book_name=input('enter a book name:-')
    Author= input('enter a author:-')
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

#To test working of functions
def testProgram():
    while True:
        createFile()
        choice = input("Add more record (y/n)? ")
        if choice in 'Nn':
            break
    Author = input('Enter author name to search: ')
    n = countRec(Author)
    print("No of books are",n)

testProgram()    
    