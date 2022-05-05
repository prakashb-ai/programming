#include <stdio.h>
#include <stdlib.h>
#define max 50;

typedef struct {
    int f,r;
    int a[max];
}queue q;

void insert(queue q, int item){

    printf("\n insert an element in the queue");
    scanf("%d",&item);

    if(q->r==max-1){
        printf("\n overflow situation");
    }
    else if(q->f==-1 || q->r==-1){
        s
    }

}