#include <stdio.h>
void printarray(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int a[],int i,int m){
    int largest = i;
    int l =(2*i)+1;
    int r =(2*i)+2;
    if(l<m && a[l]>a[largest]){
    largest = l;
    }
    if(r<m && a[r]>a[largest]){
    largest = r;
    }
    if(largest!=i){
        swap(&a[largest],&a[i]);
        heapify(a,largest,m);
    }
}

void buildheap(int a[],int m){
    for(int i=(m/2)-1;i>=0;i--){
        heapify(a,i,m);
    }
}
void heap(int a[],int m){
    for(int i=m;i>=2;i--){
        swap(&a[0],&a[m-1]);
        m--;
        buildheap(a,m);
    }
}

int main(){
    int a[50];int n;
    printf("enter the size of the aray");
    scanf("%d",&n);
    printf("enter the elements ::");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("before sorting");
    printarray(a,n);
    printf("after sorting");
    heap(a,n);
    printarray(a,n);
    return 0;
}