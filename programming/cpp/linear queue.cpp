#include <stdio.h>
#include <stdlib.h>
#define max 50

typedef struct {
    int f,r;
    int a[max];
}lq;

void insert(lq *q,int item){
    if(q->r==max-1){
        printf("\n overflow situtaion");
    }
    else if(q->f==-1 || q->r==-1){
        q->f=0;
        q->r=0;
        q->a[q->r]=item;
    }
}
 void delet(lq *q,int item){
     if(q->f==-1 || q->r==-1){
         printf("\n underflow situation");
     }
     else if(q->r=q->f){
         item=q->a[q->f];
         q->f==q->r=-1;
     }
     else {
         q->a[q->f];
         q->f=q->f+1;
     }
 }


 void display(lq *q){
     int i;
     if(q->f!=-1){
         printf("\n items inside are ");
         for(i=q->f;i<=q->r;i++){
             printf("%d ",q->a[i]);
         }
     }
 }