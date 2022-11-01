def prime(n):
    for i in range(2,n):
        if n%i==0:
            return False
        else:
            return True
def main():
    for n in range(101,501):
        if prime(n):
            print(n,end=" ")
main()
