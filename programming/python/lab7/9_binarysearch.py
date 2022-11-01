def binary_search(L, data):
    first = 0
    last = len(L)-1
    while(first<=last):
        mid = (first+last)//2
        if L[mid]==data:
            return mid
        elif L[mid]>data:
            first=mid+1
        else:
            last=mid-1
    return -1
L = [90,78,25,13,9,2]
print(L)
index = binary_search(L,2)
if index == -1:
    print('Element not found')
else:
    print('Elemenent found at position',index+1)