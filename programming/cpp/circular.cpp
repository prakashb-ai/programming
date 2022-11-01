#include <stdio.h>
#include <stdlib.h>
#define size 50
typedef struct circular{
    int f;
    int r;
    int a[size];
}circular;

void insert(circular *q){
    int item;
    printf("\n enter the element :-");
    scanf("\n %d",&item);
    if(q->f==(q->r+1)%size){
        printf("\n over flow situation");
    }
    else if(q->f==-1 || q->r==-1){
        q->f=0;
        q->r=0;
        q->a[q->r]=item;
    }
}

void delet(circular *q){
    int item;
    if(q->f==-1 || q->r==-1){
        printf("\n queue overflow ");
    }
    else if(q->f==q->r) {
        item=q->a[q->f];
        q->f=-1;
        q->r=-1;
    }
else {
    item =q->a[q->f];
    q->f=(q->f+1)%size;
}
    
}
int main(){
 circular *q;
 q=(circular *)malloc(sizeof(circular));

    insert(q);
}