#include <stdio.h>

void merge(int a[],int l,int mid,int h){
    int t[h-l+1];
    int i=l,j=mid+1,k=0;
    while(i<=mid && j<=h){
        if(a[i]<a[j]){
            t[k]= a[i];
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
        mid = (l+h)/2;
        mergeSort(a,l,mid);
        mergeSort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}

int main(void){
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int a[n];

    printf("enter the elements in the array");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    printf("sorted arrayis\n");
    for(int i=0;i<=n-1;i++)
    printf("%d\t",a[i]);
}