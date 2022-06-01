#include <stdio.h>

void merge(int a[],int l,int mid,int h){
    int t[h-l+1];
    int i=l;j= mid+1;k=0;
    while(i<=mid && j<=h){
        if(a[i]<a[j]){
            t[k] = a[i];
            i++;
            k++;
        }
        else {
            t[k] = a[j];
            j++;
            k++;
        }
    }
    for(;i<=mid;i++,k++)
       t[k] = a[i];
         for(;j<=h;j++,k++) 
           t[k] = a[j];

           k=0;
            for(i=l;i<=h;i++,k++){
               a[i] = t[k];
            }
}

void mergeSort(int a[],int l,int h){
    int mid;
    if(l<h){
        mid =(l+h)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}