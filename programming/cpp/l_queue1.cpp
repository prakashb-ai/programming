#include <stdio.h>
#include <stdlib.h>
#define max 20

typedef struct{
    int a[max];
    int f=-1;
    int r=-1;
    int val;
}lqueue;

void insert(lqueue *q){
      
       int num;
       printf("\n enter ur number to be inserted :-");
       scanf("%d",&num);

       if(q->r==-1 && q->r==-1){
           printf("\n overflow");
       }
       else {
           q->r++;
           q->a[q->r]=num;

       }

}
void delet(){
    int val;
    if(q->f==-1 || q->f>r){
        printf("\n underflow");
    }
    else {
        q->val=a[f];
        q->f++;
        q->f=q->r=-1;
        return q->val;
    }
}

void peek(lqueue *q){
    if(q->f==-1 || q->f>r){
        printf("\n quueue is empty");
        return -1;
    }
    else {
        return q->a[q->f];

    }
}
void display(lqueue *q){
    int i;

    for(i=q->f;i<q->r;i++){
        printf("%d the queus is :",q->a[i]);
    }
}
int main(){
      lqueue *q;

    int choice;
    int val;

  q=malloc(sizeof(struct));

printf("\n main");
printf("\n 1. insert");
printf("\n 2. delete");
printf("\n 3. peek");
printf("\n 4. display");
printf("\n 5. exit");

scanf("%d",&choice);
switch(choice){
    case 1:
        insert(q);
        break;
    case 2:
    delet();
         break;
    case 3:
           peek(q);
           break;
    case 4:
           display(q);
           break;
    default:
        printf("\n invalid choide");
}





    return 0;
}