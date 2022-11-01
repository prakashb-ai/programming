#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
    int info;
    struct tree *left,*right;

}tree;

tree* insert(tree* node,int item){
    if(node==NULL){
        node=(tree*)malloc(sizeof(tree));
        if(node==NULL){
            printf("\n memory full");
        }
        else{
            node->info=item;
            node->left=NULL;
            node->right=NULL;
        }
    }
}