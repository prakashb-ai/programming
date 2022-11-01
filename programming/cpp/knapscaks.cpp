#include <stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}

int knapsack(int W,int wt[],int p[],int n){
    int i,w;
    int knap[n+1][W+1];
    for(i=0;i<=n;i++){
        for(w=0;w<=W;w++){
            if(i==0 || w==0)
            knap[i][w] = 0;
            else if(wt[i-1]<=w)
             knap[i][w] = max(p[i-1] + knap[i-1][w-wt[i-1]],knap[i-1][w]);
             else 
               knap[i][w] = knap[i-1][w];
        }
    }
    return knap[n][w];
}
int main(){
    int W,n;
    int p[n],w[n];
     printf("\n enter the numbers of the items:-");
     scanf("%d",&n);
     printf("enter the price of the items");
     for(i=0;i<n;i++){
        scanf("%d",&p[i]);
     }
     printf("enter the weigth of the bag");
     for(int i=0;i<n;i++){
        scanf("%d",&w[i]);
     }
     printf("enter the capacity of bag");
     scanf("%d",&W);
     printf("the total cost is %d",knapsack(W,w,p,n));
    return 0;
}