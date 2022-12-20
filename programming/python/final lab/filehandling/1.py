def count_words(filename): 
    # open the file in read mode 
    with open(filename, 'r') as f: 
        # read all text 
        text = f.read() 
        # split the text into words 
        words = text.split() 
        # get the length of words 
        word_count = len(words) 
        # print the result 
        print("Total number of words:", word_count) 
  
# path of the file 
filename = 'text.txt'
  
# call the function 
count_words(filename)