#include <stdio.h>

void partionSort(int a[],int start,int end){
    int pivot = a[end];
    int i =(start-1);

    for(int j= start;j<=end;j++){
        if(a[i]<pivot){
            i++;
           int  temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    return(i+1);
}


void quick(int a[],int start,int end){
        if(start<end){
            int p = partionSort(a,start,end);
            quick(a,start,p-1);
            quick(a,p+1,end);

        }
}



void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}