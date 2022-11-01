#include <stdio.h>
void mergeSort(int a[],int m,int n,int b[],int c[],int x){
    int i=0,j=0,k=0;

    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
            k++;
        }
        else {
            c[k] = b[j];
            j++;
            k++;
        }

    }

     while(i<m){
         c[k] = a[i];
         i++;
         k++;
     }
     while(j<n){
         c[k]= b[j];
         j++;
         k++;
     }
}

int main(){
   int i,m,n,s;
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
    
     s = m+n;
     int c[s];

     mergeSort(a,m,n,b,c,s);
     printf("the sorted array is\n");
     for(i=0;i<s;i++)
     printf("%d",c[i]);

    return 0;
}
