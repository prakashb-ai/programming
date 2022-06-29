#include <stdio.h>
int size;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void maxheapify(int a[],int idx){
    int smallest = idx;
    int leftchild = idx*2+1;
    int rightchild = idx*2+2;
    if(leftchild < size && a[leftchild]<a[smallest]){
        smallest = leftchild;
    }
    if(rightchild < size && a[rightchild]< a[smallest]){
        smallest = rightchild;
    }
    if(idx != smallest){
        swap(&a[idx],&a[smallest]);
    }
}

void buildheap(int a[]){

    int s =(size/2)-1;
    for(int i=s;i>=0;i--){
            maxheapify(a,i);

    }
}
int extract(int a[]){
    int x =a[0];
    swap(&a[0],&a[size-1]);
    size -=1;
    maxheapify(a,0);
    return x;
}
void insert(int a[],int element){
    size+= 1;
    a[size-1] = element;
    for(int i=(size/2)-1;i>=0;i--){
        maxheapify(a,i);
    }
}

void print(int a[]){
    for(int i=0;i<size;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

void huffman(int a[]){
    while(size>1){
        int x = extract(a);
        int y = extract(a);
        insert(a,x+y);
        print(a);
    }
}

int main(){
    printf("enter the size of the array:-\n");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    buildheap(arr);
    print(arr);
    huffman(arr); 
    
    return 0;
}