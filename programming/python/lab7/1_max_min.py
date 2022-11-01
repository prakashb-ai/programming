def find_max(x,y,z):
    if x>y and x>z:
        return x
    elif y>z:
            return y
    else:
                return z
def main():
    a=int(input('enter the first number:'))
    b=int(input('enter the second number:'))
    c=int(input('enter the third number:'))
    largest=find_max(a,b,c)
    print('largest number is ',largest)
main()