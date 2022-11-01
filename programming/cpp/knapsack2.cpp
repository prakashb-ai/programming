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
    int w,i;
    int knap[n+1][W+1];
    for(i=0;i<=n;i++){
        for(w=0;w<=W;w++){
            if(i == 0 || w == 0)
             knap[i][w] = 0;

             else if(wt[i-1]<=w)
              knap[i][w] = max(p[i-1] + knap[i-1][w-wt[i-1]],knap[i-1][w]);

              else 
                knap[i][w] = knap[i-1][w];
        }
    }
    return knap[n][W];
}

int main(){
    int n,W;
    printf("\n enter the number of items:-");
    scanf("%d",&n);
    int p[n],w[n];

    printf("enter the price of the items:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    printf("enter the weight of the iems");
    for(int i=0;i<n;i++){
        scanf("%d",&w[i]);
    }
    printf("\n enter the capacity of bag");
    scanf("%d",&W);
    printf("the total max profit %d:",knapsack(W,w,p,n));
    return 0;
}