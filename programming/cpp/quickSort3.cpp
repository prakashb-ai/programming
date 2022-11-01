#include <stdio.h>
int c = 0;
void quickSort(int number[50],int first,int last){
    int i,j,pivot,temp;
 
   if(first<last){
       pivot = first;
       i = first;
       j = last;
       
       while(i<j){
           while(number[i]<= number[pivot] && i<last)
           i++;
           c++;
           while(number[j]>number[pivot])
           j--;
       
       if(i<j){
           temp = number[i];
           number[i] = number[j];
           number[j] = temp;
       }
       }
         temp = number[pivot];
         number[pivot] = number[j];
         number[j] = temp;
         quickSort(number,first,j-1);
         quickSort(number,j+1,last);
   }

}

int main(){
    int i,count,number[50];
    printf("enter the size of the array:-");
    scanf("%d",&count);

    printf("enter %d elements in the array:-",count);
    for(i=0;i<count;i++)
        scanf("%d",&number[i]);

         quickSort(number,0,count-1);

         printf("the sorted array are:-");
         for(i=0;i<count;i++)
             printf("%d",number[i]);
             printf("comparisons %d",c);
}