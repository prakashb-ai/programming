#include <stdio.h>
int k=0;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

void sort(int arr[],int n){
    int temp;
    int indexmin;

    for(int i=0;i<n-1;i++){
        indexmin = i;
        for(int j= i+1;j<n;j++){
            if(arr[j]<arr[indexmin]){
                indexmin= j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexmin];
        arr[indexmin] = temp;
    }
}

void coinexc(int d[],int m,int n){
    int s[100];
    sort(d,m);

    for(int i=m-1;i>=0;i--){
        while(n>=d[i]){
            s[k] = d[i];
            k++;
            n = n-d[i];
        }
        if(n==0){
            break;
        }
    }
    printarray(s,k);
}

int main(){
    int m,n;
    printf("enter the number of coin denominations \n");
    scanf("%d",&m);
    int d[m];
    printf("enter the denominations\n");
    for(int i=0;i<m;i++){
        scanf("%d",&d[i]);
    }
    printf("enter the value \n");
    scanf("%d",&n);
    printf("the coins required are:\n");
    coinexc(d,m,n);

    return 0;
}