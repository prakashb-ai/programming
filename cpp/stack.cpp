#include <stdio.h>
#include <stdlib.h>
#define max 50

typedef struct stack{
    int a[max];
    int top;
}stack;

void push(stack *s){
    int item;
    printf("\n enter a number to be push an element:-");
    scanf("%d",&item);
    
    if(s->top==max-1){
        printf("\n over flow");
    }
    else {
         s->a[s->top]=item;
         s->top++;
    }

}

void pop(stack *s){
    int item;

   // printf("\n enter a number to be delete an element:- ");
    //scanf("\n %d",&item);
    if(s->top==-1){
        printf("\n under flow situation");

    }
    else {
          item=s->a[s->top];
          s->top--;

    }
}
void display(stack *s){
    int i;
    for(i=s->top;i>=0;i--){
        printf("\n data is %d ",s->a[i]);
    }
}

int main(){
stack *s;
s=(stack *)malloc(sizeof(stack));

int ch;
do{
printf("\n push the element :-");
printf("\n pop the element :-");
printf("\n display the element :-");

printf("\n enter the choice of the operations:-");
scanf("\n %d",&ch);
switch(ch){
    case 1:
          push(s);
          break;
    case 2:
          pop(s);
          break;
    case 3:
          display(s);
          break;
   default:
         printf("\n invalid choice");
}
}while(ch!=4);

    return 0;
} 