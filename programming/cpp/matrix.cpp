#include <stdio.h>
#include <stdlib.h>
#define size 50
int counter;
typedef struct{
    int val[size][size];
    int r,c;
}matrix;

void enter(matrix *m){
    int i,j;
    printf("\n enter  a row and column :-");
    scanf("%d %d",&m->r,&m->c);
    printf("\n enter the elements of matrix :-");
    for(i=0;i<m->r;i++){
        for(j=0;j<m->c;j++){
            scanf("%d",&m->val[i][j]);
            if(m->val[i][j]!=0){
                counter++;
            }
        }
    }
}
void display(matrix *m){
    for(int i=0;i<m->r;i++){
        for(int j=0;j<m->c;j++){
            printf("%d ros",m->val[i][j]);
        }
    }
}
void convert_triplet(matrix *m){
    int i,j,k=1;
        m=(matrix *)malloc(sizeof(matrix));
        m->r=counter+1;
        m->c=3;
        if(counter>=(m->r*m->c/2)){
            printf("not a sparese matrix");
        }
        else{
            m->val[0][0]=m->r;
            m->val[0][1]=m->c;
            m->val[0][2]=counter;
            for(i=0;i<m->r;i++){
                for(j=0;j<m->c;j++){
                    if(m->val[i][j]!=0){
                        m->val[k][0]=i;
                        m->val[k][1]=j;
                        m->val[k][2]=m->val[i][j];
                        k++;
                    }
                }
            }
        }

    
}
int main(){
    matrix *m;
    m=(matrix *)malloc(sizeof(matrix));
    int op;

    printf("\n menu");
    printf("\n 1 insert");
    printf("\n 2 display");
    printf("\n 3 sprase matrix");

    scanf("%d",&op);
    switch(op){
        case 1:
        printf("enter the elements:-");
        enter(m);
        break;
        case 2:
           display(m);
           break;
           default:
        case 3:
              convert_triplet(m);
              break;

           printf("\n invalid choice");
    }while(op!=4);
    return 0;
    
}














