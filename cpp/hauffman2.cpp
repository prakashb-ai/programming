#include <stdio.h>
int size;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void minheap(int arr[],int idx){
    int smallest = idx;
    int leftchild = idx*2+1;
    int rightchild = idx*2+2;
    if(leftchild <size && arr[leftchild]<arr[smallest])
    smallest = leftchild;

    if(rightchild <size && arr[rightchild]<arr[smallest])
    smallest = rightchild;

    if(idx!=smallest){
        swap(&arr[idx],&arr[smallest]);
    }
    
 }

 void buildheap(int arr[]){
    int s = (size/2)-1;
    for(int i=s;i>=0;i--){
        minheap(arr,i);
    }

 }

 int extract(int arr[]){
    int x = arr[0];
    swap(&arr[0],&arr[size-1]);
        size-=1;
  minheap(arr,0);
  return x;

 }
 void insert(int arr[],int element){
    size+=1;
    arr[size-1] = element;
    for(int i=(size/2)-1;i>=0;i--){
        minheap(arr,i);
    }
 }
 void print(int arr[]){
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
   printf("\n");
 }

 void huffman(int arr[]){
    while(size>1){
        int x = extract(arr);
        int y = extract(arr);
        insert(arr,x+y);
        print(arr);
    }
 }
int main(){
    printf("enter thte size:-");
    scanf("%d",&size);
        int a[size];

    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    buildheap(a);
    print(a);
    huffman(a);
}