#include<stdio.h>
#include<stdlib.h>
#define size 5
typedef struct queue
{
int rear,front;
int arr[size];
}queue;
void init(queue *q)
{
q->rear=-1;
q->front= -1;
}
void insert(queue *q,int ele)
{
if (q->front==((q->rear +1 )% size))
printf("Queue is full\n");
else
{
if(q->front== -1)
q->front=q->rear=0;
else
{
q->rear = (q->rear+1)%size;
}
q->arr[q->rear]=ele;
}
}
int delet(queue *q)
{
int val;
if (q->front == -1)
{
printf("Queue underflow \n");
return -1;
}
else
{
val= q->arr[q->front];
if(q->front == q->rear )
{
q->front = q->rear = -1;
}
else
{
q->front = (q->front+1)%size;
}
}
return val;
}
void display(queue *q)
{
int i;
if (q->front == -1)
{
printf("Queue underflow \n");
return;
}
i=q->front;
if(q->front < q->rear)
{
for(i=q->front ; i<=q->rear; i++)
printf("\t %d",q->arr[i]);
}
else if(q->front == q->rear)
{
printf("\t %d",q->arr[q->front]);
}
else
{
for(i=q->front; i< size; i++)
printf("\t %d",q->arr[i]);
for(i=0; i<=q->rear; i++)
printf("\t %d",q->arr[i]);
}
}
int count(queue *q)
{
int count=0,i;
if(q->rear > q->front)
count=q->rear - q->front+1;
else if(q->rear < q->front)
{
count=(size- q->front+1)+ q->rear;
}
else if (q->rear == -1) // empty case
count =0;
else if(q->rear == q->front) count =1; // one element case
return count;
}
int main()
{
    queue q;
    int choice,data,x,c;
    init(&q);
    do
    {
        printf("\n1)Insert\n2)Delete\n3)Display\n4)count\n5)Exit ");
        printf("Enter your Choice=\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter data to be inserted\n");
                   scanf("%d",&data);
                   insert(&q,data);
                   break;
           case 2:x=delet(&q);
                    if(x==-1)
                        printf("Queue is empty\n");
                    else
                        printf("%d has been deleted from queue",x);
                    break;
                    case 3:printf("Displaying queue elements\n");
                            display(&q);
                            break;
                    case 4:
                    c=count(&q);
                    printf("%d",c);
                    break;
                    case 5:exit(0);
        }
    }while(choice!=5);
    return 0;
}