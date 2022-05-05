#include <stdio.h>
#include <stdlib.h>
#define max 20;

typedef struct{
    int a[max];
    int f,r;
}cqueue;

void insert(cqueue *q,int item){
    if(q->f==(q+r+1)%max){
        printf("\n queue over flow");
    }
    else if(q->f==-1 || q->r==-1){
        q->f=0;
        q->r=0;
        q->a[q->r]=item;
    }
    else {
        q->r=(q->r+1)%max;
        q->a[q->r]=item;
    }
}
int delete(cqueue *q){
    int item;
    if(q->r==-1 || q->r==-1){
        printf("\n queue underflow");

    }
    else  if(q->f==q->r){
        item=q->a[q->f];
        q->f=-1;
        q->r=-1;
    }
    else {
        item=q->a[q->f];
        q->f=(q->f+1)%max;
    }
    return item;
}
int count(cqueue *q){
    if(q->f==-1){
        return 0;
    }
    else if(q->f<=q->r){
        return (q->r-q->f+1);
    }
    else {
        return (max=q->f+q->r+1);
    }
}
int main(){
  
  int choice;
     printf("\n enter the choice:");
     printf("1.insert");
     printf("2.delete");
     printf("3.cout");
     scanf("%d",&choice);
     switch(choice){
         case 1:
             insert();
             break;
        case 2:
             delete();
             break;
        case 3:
             count();
             break;
        default:
          printf("\n invalid choice");
     }






    return 0;
}