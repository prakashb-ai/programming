#include <stdio.h>
int main(){
    int a[10];
    int i,j,n;
    int target = 9;
    printf("enter the numbers");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            target == a[i]+a[j];
        }
    }
    printf("%d ,%d",i,j);
}