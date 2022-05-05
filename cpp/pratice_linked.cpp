#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    int info;
     struct list* link;
}list;

list* start=NULL;
void insert_beg(){
    list *temp;
  int data;
    temp=(list *)malloc(sizeof(list));
    printf("\n enter ur number to be inserted:-");
    scanf("%d",&data);
    temp->info=data;
    temp->link=start;
    start=temp;
}
void insert_lst(){
    list *temp;
    list *last;
int data;
    temp=(list *)malloc(sizeof(list));
    printf("\n enter ur number to be inserted");
    scanf("%d",&data);
    temp->link=0;
    temp->info=data;
    last = start;
    while(last->link!=NULL){

last=last->link;
    }
  
  last->link=last;



}
void display(){
    list *temp;

    if(start==NULL){
        printf("\n there is not list");
    }
    else{
        temp=start;
        while(temp!=NULL){
            printf("data %d",temp->info);
            temp=temp->link;
        }
    }


}
void delet(){
    list *temp;
    if(start==NULL){
        printf("\n list is empty");
    }
    else{
        temp= start;
        temp->link=start;
        free(temp);
    }
}
int main(){
       insert_beg(); 
       display();
       //insert_lst();
       delet();
    return 0;
}