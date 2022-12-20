# python program to print all
# the unique words in a string
# in python using set() method
# function to print unique words


def printWords(l):
	
	# for loop for iterating
	for i in l:
		print(i)


# Driver code
str = "geeks for geeks"

# storing string in the form of list of words
s = set(str.split(" "))

# passing list to print words function
printWords(s)
