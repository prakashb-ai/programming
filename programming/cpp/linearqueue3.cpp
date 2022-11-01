#include <stdio.h>
#include <stdlib.h>
#define size 50

int f=-1;
int r=-1;
int a[size];
void insert(){
    int n;
    printf("\n enter a number to be inserted:- ");
    scanf("%d",&n);

    if(r==size-1){
        printf("\n overflow");
    }
    else if(f==-1 || r==-1){
        f=r=0;
    }
    else {
        r++;
        a[r]=n;
    }

}
int del(){
    int v;
    if(f==-1||f>r){
        printf("\n underflow");
        return -1;
    }
    else {
           v=a[f];
            f++;

        if(f>r){

            f=r=-1;
        }
    }
    if(v!=-1){
    printf("\n the delete number is %d",v);
    }
    
}
int peek(){
    if(f==-1||f>r){
        printf("\n the linear queue is empty");
        return -1;
    }
    else{
        return a[f];
    }
}
void display(){
    for(int i=f;i<=r;i++){
        printf("\n the linear queue is %d",a[i]);
    }
}
int main(){

int c;
do{
printf("\n 1. insert ");
printf("\n 2 . delete ");
printf("\n 3 . peek");
printf("\n 4. display");
printf("\n enter a choice ");

scanf("%d",&c);
switch(c){
    case 1:
            insert();
            break;
    case 2:
            del();
            break;
    case 3:
          peek();
          break;
    case 4:
         display();
    default:
       printf("\n invalid choice");
      
}
}while(c!=5);



    return 0;
}