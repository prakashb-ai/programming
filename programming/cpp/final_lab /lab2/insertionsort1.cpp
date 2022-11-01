#include <stdio.h>
int count=0;

void insertionSort(int array[],int size,int k){
    for(int step=1;step<size;step++){
        if(k == step){
            printf("array unsorted till %d pass\n",k);
        }
        int key = array[step];
        int j= step-1;
        while(key <array[j] && j>=0){
            array[j+1] = array[j];
            --j;
            count++;
        }
        array[j+1]= key;
    }
}

void printArray(int array[],int size){
    for(int i = 0;i<size; i++){
        printf("%d",array[i]);
    }
    printf("\n");
}


int main(){
    int size,k;
    int data[50];

    printf("enter the size of array");
    scanf("%d",&size);
    printf("elements in the array are:-");
    for(int i=0;i<size;i++){
        scanf("%d",&data[i]);
    }
    printf("enter the value of k:-");
    scanf("%d",&k);

    insertionSort(data,size,k);
    printf("sorted array in ascending order:");
    printf("\n");
    printArray(data,size);
    printf("no of step count%d",count);
    printf("\n");
    return 0;
}