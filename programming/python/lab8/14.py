def count_rec():
    file = open("STUDENT.DAT","rb")
    count = 0
    try:
        while True:
            record = pickle.load(file)
            if record[2] > 75:
                print(record)
                count+=1
    except EOFError:
        pass
    print('No of students having more than 75% are', count)
    file.close()
