#include <stdio.h>

int mergesort(int a[],int m,int n,int b[],int c[]){
    int i=0,j=0,k=0,x;
   while(i<m && j<n){
       if(a[i]<b[j]){
           c[k]=a[i];
           i++;
       }
       else {
           c[k] = b[j];
           j++;
       }
       k++;
   }
   for(;i<m;i++,k++)
       c[k]=a[i];
       for(;j<n;j++,k++)
           c[k] = b[j];

  return k;

}
int main(void){
    int i,n,m,j,k;
    printf("enter the size of the array1\n");
    scanf("%d",&m);

    int a[m];

    printf("enter the %d elements of the arrat1:\n",m);
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);

        printf("enter the  elements of array 2:\n");
        scanf("%d",&n);
        int b[n];

        printf("enter the %d elements of the array 2:\n",n);
        for(i=0;i<n;i++)
        scanf("%d",&b[i]);
     
      int c[m+n];
      k=mergesort(a,m,n,b,c);
      printf("the sorted array is \n");
      for(j=0;j<k;j++)
      printf("%d",c[j]);

      return 0;
}