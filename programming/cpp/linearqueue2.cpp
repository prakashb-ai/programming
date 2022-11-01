#include <stdio.h>
#include <stdlib.h>
#define max 50

int f=-1;
int r=-1;
int l[max];

void insert(){
    int num;
    printf("\n enter your number to be insert :-");
    scanf("%d",&num);
    if(r==max-1){
        printf("\n overflow");
    }
    else if(f==-1 || r==-1){
      f=r=0;
    }
    else {
        r++;
        l[r]=num;

    }
}
void del(){
    int val;
    if(f==-1 ||f>r){
        printf("\n underflow");
        
    }
    else {
        val=l[f];
        f++;
        if(f>r){
        f=r=-1;

        }

    }
    if(val!=-1)
    printf("\n the delet number is %d",val);
}
void display(){
    int i;
    for(i=f;i<=r;i++){
        printf("\n the queue is %d",l[i]);
    }
}

int main(){
        int e;
        int val;

    do{
    printf("\n main meanu");
    printf("\n1. insert");
    printf("\n2. delete");
    printf("\n3 . display");
    scanf("%d",&e);
    switch(e){
        case 1:
             insert();
             break;
        case 2:
            del();
            break;
        case 3:
             display();
             break;
        default :
        printf("\n invalid choice");
    }
}while(e!=5);
}