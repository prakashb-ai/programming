#include <stdio.h>
int Div(int a[],int n,int k){
    int div;
   for(int i=0;i<n;i++){
    for(int j= i+1;j<n;j++){
        div = a[i]%k;
      }
   }
      printf("division is %d",div);
    
   return div;
}
int main(){
    int a[50],k,n;
    printf("enter the size of the array:-");
    scanf("%d",&n);
    printf("enter the %d size in the array:-",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the value of the k :-");
    scanf("%d",&k);
    Div(a,n,k);
    return 0;
}