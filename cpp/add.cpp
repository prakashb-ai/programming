#include <stdio.h>

void add(int a[]){
    int target =9;
    int nums=4;
    for(int i=0;i<nums;i++){
            for(int j=i+1;j<nums;j++){
                    if(a[i]+a[j]==target){
                       printf("%d %d",i,j);

                    }

            }
    }

}
int main(){
    int a[]= {2,7,11,15};
    add(a);
    return 0;
}