#include <stdio.h>
void MergeSort(int a[],int m,int b[],int n,int c[],int s){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++; 
        }
    }
    while(i<m){
        c[k]=a[i];
        i++; 
        k++;
    }
    while(j<n){
        c[k]=b[j];
        j++; 
        k++;
    }
}
int main(){
    int m,n,s;
    printf("Enter the size of first array: ");
    scanf("%d",&m);
    int a[m];
    printf("Enter the elements:\n");
    for(int i=0;i<m;i++){
        printf("A[%d]: ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d",&n);
    int b[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        printf("B[%d]: ",i);
        scanf("%d",&b[i]);
    }

    s=m+n;
    int c[s];
    MergeSort(a,m,b,n,c,s);
    printf("The elements of the third array are:\n");
    for(int i=0;i<s;i++){
        printf("%d ",c[i]);
    }
    printf("\n");

    return 0;
}