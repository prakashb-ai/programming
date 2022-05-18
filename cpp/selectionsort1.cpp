#include <stdio.h>
void printar(int a[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",a[i]);

    }
    printf("\n");


}


void selectionsort(int a[],int size,int k){
    int s,count =0,temp,i,j;
    for(s=0;s<size-1;s++){
        count ++;
        int d = s;
        for(i = s+1;i<size;i++){
            if(a[i]>a[j])
            d= i;
        }
        temp = a[d];
        a[d] = a[s];
        a[s] = temp;
        if(count  == k){
            printf("\n unsorted arry k is : \n");
            printar(a,size);
        }
        
    }
}

int main(){
    int size,i,k,data[50];
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the value of k:");
    scanf("%d",&k);
    printf("elements inthe array");
    for(int i=0;i<size;i++){
        scanf("%d",&data[i]);
    }
    selectionsort(data,size,k);
    printf("sortedf array");
    printar(data,size);
}