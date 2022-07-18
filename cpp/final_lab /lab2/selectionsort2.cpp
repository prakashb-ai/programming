#include <stdio.h>
int count=0;
void printarray(int a[],int n){
    for(int i=n-1;i>=0;i--){
        printf("%d",a[i]);
    }
}
void printarray1(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}

void selectionSort(int a[],int n,int m){
    int indexmin,temp;
    for(int i=0;i<n-1;i++){
         indexmin =i;
         if(i==m){
            printf("array sorted till passes:");
            printarray1(a,n);
         }
         for(int j=i+1;j<n;j++){
            if(a[j]<a[indexmin]){
                indexmin = j;
                count++;
            }
         }
         temp = a[i];
         a[i] = a[indexmin];
         a[indexmin] = temp;
    }
}

int main(void){
    int a[20],n,m;
    printf("enter the size of the array::");
    scanf("%d",&n);
    printf("enter the elements in the array:");
    for(int k=0;k<n;k++){
        scanf("%d",&a[k]);
    }
    printf("enter the number of passes:");
    scanf("%d",&m);
    selectionSort(a,n,m);
    printf("sorted array in descending order:");
    printarray(a,n);
    printf("\n");
    printf("array in sorted in ascending order::");
    printarray1(a,n);
    printf("number of counts are %d:",count);
    return 0;
}