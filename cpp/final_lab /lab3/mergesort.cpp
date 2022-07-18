#include<stdio.h>
int total =0;

void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

void merge(int arr[],int low,int mid,int high)
{
	int n =0;
	int n1= mid-low+1;
	int m1= high-mid;
	
	int arr1[n1],arr2[m1];
	
	for(int p=0;p<n1;p++)
	{
		arr1[p]=arr[low+p];
	}
	for(int u=0;u<m1;u++)
	{
		arr2[u]=arr[mid+1+u];
	}
	
	int i=0,j=0;
	int k=low;
	while(i<n1 && j<m1)
	{
		if(arr1[i]<arr2[j])
		{
			arr[k]=arr1[i];
			i++;
			k++;
			n++;
		}
		else
		{
			arr[k]=arr2[j];
			j++;
			k++;
			n++;
		}
	}
	while(i<n1)
	{
		arr[k]=arr1[i];
		k++;
		i++;
		n++;
	}
	while(j<m1)
	{
		arr[k]=arr2[j];
		k++;
		j++;
		n++;
	}
	printf("stepcount %d low : %d mid : %d high : %d\n ",n,low,mid,high);
	total = total+n;
}

void mergesort(int arr[],int low, int high)
{
	if(low<high)
	{
		int mid= (low+high)/2;
		
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

int main()
{ 
int m;
	int arr[20];
	printf("enter the size of array\n");
	scanf("%d",&m);
	
	printf("enter the array elements\n");
	for(int h=0;h<m;h++)
	{
		scanf("%d",&arr[h]);
	}
	
	printf("before sorting the array\n");
	printarray(arr,m);
	printf("\n");
	mergesort(arr,0,m-1);
	printf("after sorting the array\n");
	printarray(arr,m);
	printf("\n");
	printf("total step count %d",total);
	return 0;
	
	
}