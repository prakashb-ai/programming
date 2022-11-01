#include <stdio.h>
int binarysearchrec(int a[],int low,int high,int key){
    int mid;
    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]<key)
            low = mid+1;
        else 
            high = mid+1;

        
        return -1;
    }
}

int main(){
    int a[100],i,key,low,high,n,p;
    printf("enter number of elements of array:\n");
    scanf("%d",&n);
    low = 0;
    high = n-1;
    printf("enter array elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter a  key");
    scanf("%d",&key);
    p = binarysearchrec(a,low,high,key);
    if(p<0)
    printf("element not found");
    else 
    printf("element found at postion %d",p+1);
}