#include <stdio.h>
#include <stdlib.h>
#define size 50

typedef struct {
    int top;
    int a[size];
}stack;

void push(stack *s,int item){

    printf("\n enter an element to be push into stack :-");
    scanf("%d",&item);

    if(s->top==size-1){
        printf("\n overflow situation");
    }
    else {
        s->top++;
        s->a[s->top]=item;
    }
}

void pop(stack *s,int item){

    printf("\n which element do u pop from the stack :-");
    scanf("%d",&item);

    if(s->top==-1){
        printf("\n underflow situation");
    }
    else {
        s->top--;
        item=s->a[s->top];
    }
}

void display(stack *s){
    int i;
    for(i=s->top;i>=0;i--){
        printf("\n %d \t ",s->a[i]);
    }
}

int main(){
    int c;
    stack *s;
    int item;
   do{
   printf("\n menu of the stack:-");
   printf("\n 1. push element operation:-");
   printf("\n 2 . pop element operation:-");
   printf("\n 3. display the  elements:-");
   scanf("%d",&c);

   switch(c){
       case 1:
          printf("push elements are:-");
          push(s,item);
          break;
        case 2:
          printf("pop elements are:-");
          pop(s,item);
          break;
        case 3:
           printf("display elements are:-");
           display(s);
           break;
        
          default:
            printf("\n invalid option");
   }
   }while(c!=4);












    return 0;
}