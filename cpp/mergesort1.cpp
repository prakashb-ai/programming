#include <stdio.h>

int mergesort(int a[],int m,int n,int b[],int c[]){
    int i=0,j=0,k=0,x;

    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
        }
        else {
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
     int i,j,k,m,n;

     printf("enter the size of the array\n");
     scanf("%d",&m);
      
      int a[m];
       
     printf("enter  %d elemensts in the array1 :-\n",m);

     for(i=0;i<m;i++){
         scanf("%d",&a[i]);
     }

     
     printf("enter the size of the array2\n");
     scanf("%d",&n);
  
    int b[n];
     printf("enter %d elements in the array 2:-\n",n);
     for(i=0;i<n;i++){
         scanf("%d",&b[i]);
     }
     int c [m+n];
     k = mergesort(a,m,n,b,c);

     printf("the sorted array are:\n");
     for(j=0;j<k;j++){
         printf("%d\t",c[j]);
     }
     return 0;

 }