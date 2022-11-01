//binary search recursive and non recursive method

#include <stdio.h>
int binary_nonrec(int arr[],int lb,int ub,int key){
    int mid;
    while(lb<ub){
        mid = (lb+ub)/2;
        if(arr[mid] == key)
        return mid;
        else if(key < arr[mid])
        ub = mid-1;
        else 
        lb = mid+1;

    }
    return -1;
}

int binary_rec(int arr[],int lb,int ub,int key){
    int mid;
    mid = (lb+ub)/2;

    if(lb>ub)
     return -1;
    else if(arr[mid] == key)
     return mid;
    else if(key < arr[mid])
     return binary_rec(arr,lb,mid-1,key);
     else 
     return binary_rec(arr,mid+1,ub,key);
}


int main(){
    int p,size,arr[100],i,key;
    int lb,ub;

    printf("enter the size of the array :\n");
    scanf("%d",&size);
    lb=0;
    ub = size-1;

    printf("enter the elements of the array \n");

    for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);

     }
     printf("the elements are ");
     for(int i=0;i<=size;i++){
         printf("%d\t",arr[i]);
     }
    printf("enter the element to be searched \n");
    p = binary_nonrec(arr,lb,ub,key);
    if(p<0)
    printf("]n element not found");
    else 
    printf("element found at position %d",p+1);

    printf("\n searching using binary search non recursion method");
    p = binary_rec(arr,lb,ub,key);
    if(p<0)
    printf("element found");
    else
    printf("element not found at position %d",p+1);

}