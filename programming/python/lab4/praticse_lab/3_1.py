def change_String(str1):
    return str1[-1:]+str1[1:-1]+str1[:1]
def main():
    str1=input('enter a string:-')
    print(change_String(str1))
main()