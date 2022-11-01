def sum(number):
    total=0
    for i in number:
        total+=i**3
    return total
def main():
    number=[3,6,4,8,9]
    s=sum(number)
    print(s)
main()