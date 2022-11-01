
//wrtie a program that finds an optimal solution to the following 0/1 knapsack is m we have n objects with their respective weight a 
//set of p.fill the knapsack the maximizes the total profit
#include <stdio.h>
int max(int a,int b){
    if(a>b)
     return a;
     else 
      return b;
}

int knapsack_dp(int w[],int p[],int n,int m){
    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
      dp[i][0]=0;
       for(int i=0;i<=m;i++)
         dp[0][i]=0;
          
           for(int i=1;i<=n;i++)
             for(int j=1;j<=m;j++)
               if(j>=w[i-1]){
                dp[i][j] =max(p[i-1]+dp[i-1][j-w[i-1]],dp[i-1][j]);
               }
               else{
                dp[i][j] = dp[i-1][j];
               }
               printf("\n");
               for(int i=1;i<n;i++)
                 for(int j=1;j<m;j++) 
                   printf("%d",dp[i][j]);
                   printf("\n");
                  
               return dp[n][m];
}

int main(){
    int n,max,m;
    printf("Enter the knapsack capacity::");
    scanf("%d",&m);
    printf("Enter the number of objects::");
    scanf("%d",&n);
    int w[n],p[n];
    printf("Enter the weight of the objects::");
      for(int i=0;i<n;i++) 
         scanf("%d",&w[i]);

         printf("enter the profit of objects::");
         for(int i=0;i<n;i++)
         scanf("%d",&p[i]);
         max= knapsack_dp(w,p,n,m);

         printf("the total profit is::%d",max);
         return 0;

}