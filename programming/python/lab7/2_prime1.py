def isPrime(n):
    for i in range(2,n):
        if n%i==0:
            return False
        else:
            return True

def main():
    for n in range(100,501):
        if isPrime(n):
            print(n,end=" ")
main()
