#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    int info;
    struct list *link;
}list;

list *create(list *node){
    list *start,*ne;
    char ch;
    int item;
    ne=(list *)malloc(sizeof(list));
    printf("\n enter the item:-");
    scanf("%d",&item);
    ne->info=item;
    ne->link=NULL;
    if(node==NULL){
        node =ne;
        start=node;

    }
    else{
        node->link=ne;
        node=node->link;
    }
    printf("\n want to enter node" );
    scanf("%c",&ch);
    while(ch!='n'){
        ne=(list *)malloc(sizeof(list));
        printf("\n enter the item:-");
        scanf("%d",&item);
        ne->info=item;
        node->link=NULL;
        node=node->link;
    }
    return start;
}
void display(list *node){
    list *ptr;
    for(ptr=node;ptr!=NULL;ptr=ptr->link){
        printf("\n %d \t",ptr->info);
    }
}

int main(){
    int ch;
    printf("\n 1 create");
    printf("\n 2 display");
    
    printf("\n choice");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            *create(start);
            break;
        case 2:
              display(node);
              break;
        default:
        printf("\n invalid choice");
    }
}