#include <stdio.h>
int count = 0;

void insertionsort(int a[],int size,int k){
    for(int step=1;step<size;step++){
        if(k == step){
           // printf("\n element is found");
           printf("unsorted arry %d",k);
        }
        else {
            printf("element is not found");
        }
        int key = a[step];
        int j = step-1;
        while(key<a[j] && j>=0){
            a[j+1] = a[j];
            --j;
            count++;
        }
        a[j+1] = key;
    }
}

 void printArray(int a[],int size){
     for(int i=0;i<size;i++){
         printf("%d",a[i]);
     }
 }

 int main(){
     int data[50],k,size;
     printf("enter the size of the array");
     scanf("%d",&size);
     printf("\n elements inthe array");
     for(int i=0;i<size;i++){
         scanf("%d",&data[i]);

     }
     printf("enter the key of the element");
     scanf("%d",&k);
     insertionsort(data,size,k);
     printf("sorted ");
     printArray(data,size);
     printf("\n");
     return 0;
 }