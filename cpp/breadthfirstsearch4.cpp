#include <stdio.h>
int Q[20],front =-1,rear=-1;
struct node{
    int col,dist,par;
};

int Queue_empty(int Q[]){
    if(front==-1)
     return 1;
     else 
      return 0;
}

void Enqueue(int Q[],int k){
    if(front==-1){
        front++;
        rear++;
        Q[rear]=k;
    }
    else{
        if((rear+1)%20==front){
            printf("queue is full\n");
        }
        else{
            rear = (rear+1)%20;
            Q[rear]=k;

        }
    }
}
int Dequeue(int Q[]){
    if(front==-1){
       printf("Queue is empty:\n");
    }
    else {
        if(front==rear){
            int temp =Q[rear];
            front =-1;
            rear =-1;
            return temp;
        }
        else{
            int temp=Q[rear];
            front = (front+1)%20;
            return temp;
        }
    }
}

void bfs(int g[][10], struct node*v,int start){
    int i,j,k;
     for(i=0;i<10;i++){
        if(i!=start){
            v[i].col=0;
            v[i].dist=32765;
            v[i].par=-1;
        }
     }
     v[start].col=1;
     v[start].dist=0;
     v[start].par=-1;
     Enqueue(Q,start);
     while(!Queue_empty(Q)){
        for(i=0;i<10;i++){
            int u = Dequeue(Q);
            if(i!=u){
                v[i].col=1;
                v[i].dist=v[u].dist+1;
                v[i].par=u;
                Enqueue(Q,i);
            }
        }
        v[i].col=2;
     }
}
int main()
{
  int i, j, g[10][10]={0};
  int srcnode;
  printf("What is start node : ");
  scanf("%d",&srcnode);
  struct node v[10]={0};
  for(i=0; i<10;i++)
    for(j=0;j<10;j++)
      scanf("%d", &g[i][j]);
  bfs(g, v, srcnode);
  printf("Node\tDistance from Source: %d\t\t ParentNode\n",srcnode);
  for(i=0;i<10;i++)
  {
    printf("Node:%d\t\t%d\t\t\t\t\t\t\t%d\n",i, v[i].dist,v[i].par);
  }
  return 0;
}