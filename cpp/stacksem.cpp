#include <stdio.h>
#include <stdlib.h>
#define max 50;

typedef struct {
    int top;
    int a[max];
}stack;

//what is the stack?
//ans:- stack is the linear data structure where insertion and deletion can be drawn at one end.
//stack it may order follow is lifo (last in first out)

void push(stack s,int item){
     
     printf("\n enter the element to be inserted in an stack");
     scanf("%d",&item);
     if(s->top==max-1){
         printf("stack is overflow");
     }
     else {
         s->top++;
         s->a[top]=item;
     }
}

void pop(stack s,int item){

    printf("\n delete an element from the stack");
    if(s->top==-1){
        printf("\n stack is under flow situation");
    }
    else{
        s->top--;
        item=s->a[top];
    }

}

void display(stack s){
    int i;

    for(i=s->top;i>=0;i--){
        printf("\n the element is %d",s->a[top]);
    }
}


int main(){

     int ch;
     stack s;
     s=(stack *)malloc(sizeof(stack));
do{
     printf("\n 1. push the element");
     printf("\n 2. pop the element");
     printf("\n 3. display");

     printf("\n");
     printf("enter the choice of the operations");
     scanf("%d",&ch);

     switch(ch){
         case 1:
             printf("push operation");
             push(s,item);
             break;
         
         case 2:
            printf("pop operation");
            pop(s,item);
            break;
        
        case 3:
            display(s);
            break;

         default :
            printf("\n invalid option");
     }
}while(ch!=4);






















    return 0;
}