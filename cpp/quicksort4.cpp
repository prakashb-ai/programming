#include <stdio.h>
int count =0;
void quicksort(int number[100],int first ,int last){
    int i,j,temp,pivot;
    if(first<last){
    pivot = first;
    i = first;
    j = last;
            
            while(i<j){
                while(number[i]<=number[pivot] && i<last)
                i++;
                count++;
                while(number[j]>number[pivot])
                j--;
                count++;
            
            if(i<j){
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
            }
            temp = number[pivot];
            number[pivot] = number[j];
            number[j] = temp;
            quicksort(number,first,j-1);
            quicksort(number,j+1,last);
    } 
}

int main(void){

   int i,n,number[100];
   printf("enter the size of the array:-");
   scanf("%d",&n);

   printf("enter %d elements in the array :-",n);
   for(int i=0;i<n;i++){
       scanf("%d",&number[i]);

   }

   quicksort(number,0,n-1);

   printf("sorted elements of the array:-");
   for(i=0;i<n;i++){
       printf("%d",number[i]);
   }

   printf("count is %d",count);









}




