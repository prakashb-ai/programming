#include <stdio.h>

int count = 0;

void insetionSort(int a[],int size,int k){
    for(int step = 1;step<size;step++){
        if(k == step){
            printf("array unsorted %d",k);
        }
        int key = a[step];
        int j = step - 1;
        while(key < a[j] && j>=0){
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
    printf("\n");
}

int main(){

        int data[50];
        int k,size;

        printf("enter the size of the array:-\n");
        scanf("%d",&size);

        printf("\n elements in the array are :-");
        for(int i=0;i<size;i++){
            scanf("%d",&data[i]);
        }

        printf("enter the key of the array:-");
        scanf("%d",&k);

        insetionSort(data,size,k);
        printf("sorted array in the ascending order");
        printf("\n");
        printArray(data,size);
        printf("no of steps count:- %d",count);
        printf("\n");

















    return 0;
}