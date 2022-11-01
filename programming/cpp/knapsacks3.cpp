#include <stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}

int knapsacks(int W,int wt[],int p[],int n){
    int i,w;
    int knaps[n+1][W+1];
      for(i=0;i<=n;i++){
           for(w=0;w<=W;w++){
               if(i == 0 || w == 0)
                  knaps[i][w] = 0;
                    else if(wt[i-1]<=w)
                      knaps[i][w] = max(p[i-1] + knaps[i-1][w-wt[i-1]],knaps[i-1][w]);
                      else 
                        knaps[i][w] = knaps[i-1][w];
           }
      }
      return knaps[n][W];
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
    printf("the total max profit %d:",knapsacks(W,w,p,n));
    return 0;
}