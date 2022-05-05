//write a program to implement a linear queue

#include <stdio.h>
#include <stdlib.h>
#define max 10

int queue[max];
int f=-1;
int r=-1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
int main(){
    int option,val;
    do{
        printf("\n\n ****main menu***");
        printf("\n 1.insert");
        printf("\n 2.delete");
        printf("\n 3.peek");
        printf("\n 4.display");
        printf("\n 5.exit");
       printf("\n enter ur option");
       scanf("%d",&option);
       switch(option){
           case 1:
                insert();
                break;
           case 2:
                val=delete_element();
                if(val!=-1)
                printf("\n the number deleted is : %d",val);
                break;
            case 3:
                  val=peek();
                  if(val!=-1)
                  printf("\n the first value is queue is: %d",val);
                  break;
            case 4:
                  display();
                  break;         
       }   
     }while(option!=5);
           return 0;
        
}

void insert(){
    int num;
    printf("\n enter the number to be inserted in the queue :");
    scanf("%d",&num);
    if(r==max-1){
        printf("\n over flow");
        
    }
    else if(f==-1 || r==-1){
        f=r=0;

    }
    else{
        r++;
        queue[r]=num;
    }
}
int delete_element(){
    int val;
    if(f==-1 || f>r){
        printf("\n underflow");
        return -1;
    }
    else {
        val =queue[f];
        f++;
        if(f>r){
            f=r=-1;
            return val;
        }
    }
}
int peek(){
    if(f==-1 ||f>r){
        printf("\n queue is empty");
        return -1;
    }
    else {
        return queue[f];
}
}
void display(){
    int i;
    printf("\n");
    if(f==-1 || f>r){
        printf("\n queue is empty");
    }
    else {
        for(i=f;i<=r;i++){
            printf("\t %d",queue[i]);
        }
    }
}