#include <stdio.h>
int count=0;

void insertionSort(int arr[],int size,int k){
    for(int step = 1;step<size;step++){
         if(k==step){
            printf("array unsorted %d till passes",k);
         }
         int key = arr[step];
         int j = step-1;
         while(key<arr[j] && j>=0){
            arr[j+1] = arr[j];
            --j;
            count++;
         }
         arr[j+1] = key;
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int data[50],size,k;

    printf("enter the size of the array::");
    scanf("%d ",&size);
    printf("enter %d elements in the array::",size);
    for(int i=0;i<size;i++){
        scanf("%d ",&data[i]);
    }
    printf("Enter the k element::");
    scanf("%d",&k);
    insertionSort(data,size,k);
    printf("array increasing order::");
    printArray(data,size);
    printf("number of counts area %d",count);
}