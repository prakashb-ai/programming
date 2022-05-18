#include<stdio.h>
int count = 0;
void printarray(int arr[],int n)
{
	for(int i=n-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
}
void printarray1(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void selectionsort(int arr[],int n,int m)
{
	int indexmin,temp;
	
	for(int i=0; i<n-1;i++)// for passes
	{
		indexmin =i;
		if(i==m)
		{
		printf("array sorted till given pass is \n");
		printarray1(arr,n);	
		printf("\n");
		}
		
		
			for(int j= i+1;j<n;j++)
			{
				if(arr[j]<arr[indexmin])
				{
					indexmin =j;
					count ++;
				}
			}
			temp = arr[i];
			arr[i]= arr[indexmin];
			arr[indexmin]=temp;
		
	}
}
int main()
{
	
	int arr[20];
	int n,m;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(int k=0;k<n;k++)
	{
		scanf("%d",&arr[k]);
	}
	printf("enter no of passes\n");
	scanf("%d",&m);
	
	selectionsort(arr,n,m);
	printf("sorted array in descending order is \n");
	printarray(arr,n);
	printf("\n");
	printf("number of comparisons are %d\n",count);
}
