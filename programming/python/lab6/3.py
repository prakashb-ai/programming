phonebook={}
choice=1

while choice!=0:
    print('\n menu')
    print('1. Add a record')
    print('2. search a record')
    print('3. change a record')
    print('4. Delete a record')
    print('0. quit')
    choice = int(input('enter  your choice: '))
    if choice==1:
        name=input('enter a name:')
        phone=int(input('enter your 10 digit number:'))
        if name in phonebook:
            print('Name Already exist')
        else:
            phonebook[name]=phone
            print('Record added')
    elif choice==2:
            name=input('enter name to search :')
            if name in phonebook:
                print(name,':',phonebook[name])
            else:
                print('record not found')
    elif choice==3:
            name = input('enter name:')
            if name in phonebook:
                phone=int(input('enter a new 10 digit nummber:'))
                print('record updated')
            else:
                print('record not found')
    elif choice==4:
            name=input('enter a name::')
            if name in phonebook:
                del phonebook[name]
                print('record deleted')
            else:
                print('recod not found')
