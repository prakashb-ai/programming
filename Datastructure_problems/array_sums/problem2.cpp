//find the pair of array
#include <stdio.h>
void pair(int nums[],int n,int target){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]== target){
                printf("%d %d\n",nums[i],nums[j]);
            }
            
        }
    }
}

int main(){
    int nums[]={1,4,10,-3};
    int target= 14;
    int n = sizeof(nums)/sizeof(nums[0]);
    pair(nums,n ,target);
}