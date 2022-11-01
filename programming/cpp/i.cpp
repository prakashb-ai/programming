#include <stdio.h>

int main(){
  int n,t,i,j,a[50];
    
       printf("enter a number :-");
       scanf("%d",&n);
      for(i=n-2;i>=0;i--){
          for(j=0;j<=i;j++){
              if(a[j]>a[j+1]){
                  a[j]=t;
                 // a[j]=a[j+1];
                  a[j+1]=t;
              }
          }
      }
          printf("sort %d",t);
          
    

    return 0;
}