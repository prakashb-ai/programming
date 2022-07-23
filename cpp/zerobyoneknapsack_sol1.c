
//dynamical appraoch
#include <stdio.h>

int max(int a,int b)
{
	if (a>b)
	return a;
	else
	return b;
}

void knapsack_sol(int w[],int p[],int n,int weight,int dp[n+1][weight+1])
{
    int hash[n];
    for(int i=0;i<n;i++)
    hash[i]=0;
    int i = n;
    int j = weight;
   while(i> 0 && j > 0)
   {
     int temp1=0;
     if(j >= w[i-1])
        temp1 = p[i-1]+dp[i-1][j-w[i-1]];

       if(temp1==dp[i][j]){
         hash[i-1]=1;
         j =j-w[i-1];
         i--;
    
       }
         else 
         i--;
   }
    printf("\n");
     for(int i=0;i<n;i++)
      printf("%d ",hash[i]);
}

void  knapsack_dp(int w[],int p[],int n,int weight)
{
     int dp[n+1][weight+1];

     for(int i=0;i<=n;i++)
     dp[i][0]=0;

     for(int i=0;i<=weight;i++)
     dp[0][i]=0;

     for(int i=1;i<=n;i++)
      for(int j=1;j<=weight;j++)
      {
          if(j >= w[i-1])
          dp[i][j] = max(p[i-1]+dp[i-1][j-w[i-1]],
          dp[i-1][j]);
          else 
          dp[i][j] = dp[i-1][j];
      }
     knapsack_sol(w,p,n,weight,dp);     
}



int main(void) {
  int n;
  printf("Enter the knapsack capacity: ");
  int W;
  scanf("%d",&W);
  printf("Enter the no of objects: ");
  scanf("%d",&n);
  int w[n],p[n];
  printf("Enter the weight of objects: ");
  for(int i=0;i<n;i++)
  scanf("%d",&w[i]);
  printf("Enter the profit of objects: ");
  for(int i=0;i<n;i++)
  scanf("%d",&p[i]);
  knapsack_dp(w,p,n,W);
  return 0;
}