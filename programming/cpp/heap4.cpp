#include <stdio.h>
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}

void swap(int *a,int *b){
    int temp;
     
     temp = *a;
     *a = *b;
     *b = temp;
    
}

void maxheapfy(int a[],int i,int m){
    int largest = i;
    int l = (2*i)+1;
    int r = (2*i)+2;

    if(l<m && a[l]>a[largest]){
        largest = l;
    }
    if(r<m && a[r]>a[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(&a[largest],&a[i]);
        maxheapfy(a,largest,m);
    }
}
void buildheap(int a[],int m){
    for(int i=(m/2)-1;i>=0;i--){
        maxheapfy(a,i,m);
    }
}



int main(){
    int arr[100], n;
    printf("\n enter the size of the array");
    scanf("%d",&n);

    printf("\n enter %d elements in the array",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
           printf("\n before heapify");
           printarray(arr,n);

           printf("after heapify");
           buildheap(arr,n);
           printarray(arr,n);
  
return 0;
}