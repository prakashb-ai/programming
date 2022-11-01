#include <stdio.h>

int partition(int a[],int start,int end){
    int pivot = a[end];
    int i=(start-1);
    for(int j=start;j<=end;j++){
        if(a[j]<pivot){
            i++;
            int t=a[i];
            a[i] =a[j];
            a[j]=t;
        }
    }
    int t = a[i+1];
    a[i+1] = a[end];
    a[end]= t;
    return(i+1);
}
void quicksort(int a[],int start,int end){
    if(start<end){
        int p = partition(a,start,end);
        quicksort(a,start,p-1);
        quicksort(a,p+1,end);
    }
}

int main(){
    int n,a[50];
    printf("enter the size of the array::");
    scanf("%d",&n);
    printf("enter %d elements in the array::",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("sorted elements are::");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}