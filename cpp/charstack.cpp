#include <stdio.h>
#include <stdlib.h>
#define max 100

typedef struct stack{
    char a[max];
    int top;
}stack;

void push(stack *s){
    char item;
    printf("\n enter a number to be push an element:-");
    scanf("%s",&item);

    if(s->top==max-1){
        printf("\n the overflow");

    }
    else {
        s->a[s->top]=item;
        s->top++;
    }
}

void pop(stack *s){
    char item;
    if(s->top==-1){
        printf("\n underflow\n");

    }
    else {

        item =s->a[s->top];
        s->top--;
    }
}
void display(stack *s){
    char i=0;
    for(i=s->top;i>=0;i--){
        printf("\n data is %c",s->a[i]);
    }
}

int main(){
    stack *s;
    s=(stack *)malloc(sizeof(stack));
    
int ch;
do{
printf("\n 1 push the element \n");
printf("\n 2 pop the element \n ");
printf("\n 3 display the element \n");

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