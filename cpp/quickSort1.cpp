#include <stdio.h>
int c=0;
void quicksort(int number[25],int first,int last){
    int i,j,pivot,temp;

    if(first<last){
        pivot = first;
        i = first;
        j = last;

        while(i<j){
            while(number[i]<=number[pivot] && i<last)
            i++;
                        c++;

            while(number[i]>number[pivot])
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
        quicksort(number,first,j-1);
        quicksort(number,j+1,last);
    }
}

int main(){
    int i,count;
    int number[25];
   
     
     printf("enter the size of the array:-");
     scanf("%d",&count);

     printf("enter %d elements in the array:-",count);
     for(i=0;i<count;i++){
         scanf("%d",&number[i]);
     }
     

     quicksort(number,0,count-1);

     printf("the array sorted array is :-");
     for(i=0;i<count;i++){
         printf("%d",number[i]);
     }
              printf("comparsions is %d",c);

     
  return 0;
}