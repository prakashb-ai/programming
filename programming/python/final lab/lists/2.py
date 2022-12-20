ls = eval(input("Enter list: "))
n = int(input("Enter number to search: "))
if n in ls:
    print(n, "found at index", ls.index(n))
else :
    print(n, "not found in list")