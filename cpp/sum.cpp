#include <stdio.h>
int Sum(int a[],int n){
	int sum=0;
	int i,j;
	for(i=0;i<n;i++){
            sum = sum+a[i];

		
	}
                    	printf("total sum is:-%d",sum);

    return sum;
}

int main(){
	int n;
	int a[20];
	printf("enter the array");
	scanf("%d",&n);
	printf("enter  in the array");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	Sum(a,n);

}