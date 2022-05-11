#include <stdio.h>

int binarysearch_rec(int a[],int low,int high,int key){
    int mid;
    mid = (low+high)/2;
    if(low>high)
    return -1;

    else if(a[mid] == key)
    return mid;

    else  if(a[mid]<key)
    return binarysearch_rec(a,mid+1,high,key);
    else 
    return binarysearch_rec(a,low,mid-1,key);
}

int binarysearch_nonrec(int a[],int low,int high,int key){
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid] == key)
        return mid;
        else if(a[mid]<key)
        return low = mid+1;
        else 
        return high = mid -1;
    }
}

int main(){
    int a[100],i,n,low,high,p,key;

    printf("enter the size of the array");
    scanf("%d",&n);
     
    low =0;
    high = n-1;

    printf("enter the elements of the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("enter a key");
    scanf("%d",&key);

    printf("recursive functions");
    p = binarysearch_rec(a,low,high,key);
    if(p<0){
        printf("elemnet not found");
    }
    else {
        printf("element found at position at %d",p+1);
    }


    printf("\n non recurisve function");
    p = binarysearch_nonrec(a,low,high,key);

    if(p<0){
        printf("element found");
    }
    else {
        printf("element found at position %d",p+1);
    }




}