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
            printf("\n memory full\n");
        }
        else {
            node->info=item;
            node->left=NULL;
            node->right=NULL;
        }
    }
    else  if(item>node->info){
        node->right=insert(node->left,item);
    }
    else{
        node->left=insert(node->left,item);
    }
    return node;
}
void search(tree* node,int sh){
    if(node!=NULL){
        if(node->info==sh)
            printf("search successfull\n");
        
            else if(node->info>sh)
                search(node->left,sh);
                else if(node->info<sh){
                    search(node->right,sh);
                }
    }
            else 
            printf("search unsuccessfull\n");
        
    }

void inorder(tree* node){
    if(node!=NULL){
        inorder(node->left);
        printf("%d",node->info);
        inorder(node->right);
    }
}
void preorder(tree* node){
     if(node!=NULL){
       printf("%d",node->info);
       preorder(node->left);
       preorder(node->right);

    }
}

void postorder(tree* node){
    if(node!=NULL){
        postorder(node->left);
        postorder(node->right);
        printf("%d",node->info);
    }
}

int size(tree* node){
    if(node!=NULL)
    return 0;
    else 
       return(size(node->left)+1+size(node->right));
}
int identical(tree* node1,tree* node2){
    if(node1==NULL && node2==NULL)
        return 1;
        else if(node1!=NULL || node2!=NULL)
        return (node1->info==node2->info && identical(node1->left,node2->left) && identical(node1->right,node2->right));

    
}
int main(){
    int c,item,i;
    tree *node,*node1;
    node=(tree*)malloc(sizeof(tree));
    node1=(tree*)malloc(sizeof(tree));
    node=node1=NULL;
    do{
        printf("\n enter 1.to insert\n 2. for search\n 3. for inorder\n 4. for preorder\n 5. for postorder\n 6 for size \n 7. for identical \n 8. for mirror \n 9 for exit\n");
        scanf("%d",&c);
        switch(c){
            case 1:
            printf("enter item\n");
            scanf("%d",&item);
            node=insert(node,item);
            break;
            case 2:
            printf("enter item u search for ");
            scanf("%d",&item);
            search(node,item);
            break;
            case 3:
            inorder(node);
            break;
            case 4:
            preorder(node);
            break;
            case 5:
            postorder(node);
            break;
            case 6:
            printf("%d is the size of tree",size(node));
            break;
            case 7:
            printf("enter new tree elements\n");
            for( i=1;i<=size(node);i++){
                printf("enter item\n");
                scanf("%d",&item);
                node1=insert(node1,item);
                printf("%d",identical(node,node1));
                break;
                default:
                exit(0);
            }
        }
    }while(c<=8);
}