#include <stdio.h>

int mergeSort(int a[],int m,int n,int b[],int c[],int x){
    int i=0,j=0,k=0;

    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }
    for(;i<m;i++,k++)
        c[k] = a[i];
         for(;j<n;j++,k++)
            c[k] = b[j];
    return k;

}

int main(void){
   int i,n,m,j,k,x;
   printf("enter the size of the array1:-\n");
   scanf("%d",&m);

   int a[m];
   printf("enter %d elements in the array1:\n",m);
   for(i=0;i<m;i++)
     scanf("%d",&a[i]);


     printf("enter the size of the array1:-\n");
   scanf("%d",&n);

   int b[n];
   printf("enter %d elements in the array1:\n",m);
   for(i=0;i<m;i++)
     scanf("%d",&b[i]);
    
     x = m+n;
     int c[x];

     k=mergeSort(a,m,n,b,c,x);
     printf("the sorted array is\n");
     for(j=0;j<k;j++)
     printf("%d\t",c[j]);

    return 0;
}