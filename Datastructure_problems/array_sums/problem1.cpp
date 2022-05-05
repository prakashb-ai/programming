//find the pair of sum of the array
//int nums ={8,7,2,5,3,1}
//tagert =10;


#include <stdio.h>

void findpair(int nums[],int n,int tagert){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==tagert){
                printf("%d %d\n",nums[i],nums[j]);
            }
            
        }
    }
}
int main(){
    int nums[]={8,7,2,5,3,1};
    int tagert =10;
    int n =sizeof(nums)/sizeof(nums[0]);
    findpair(nums,n,tagert);
}

