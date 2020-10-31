#include<stdio.h>
#include<stdlib.h>
/*struct Node
{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL; */


struct Queue
{
   int size;
   int front;
   int rear;
   int *Q;
};
/*void enqueue(int x)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL)
        printf("queue is full\n");
    else
    {
        t->data=x;
        t->next=NULL;
        if(front==NULL)
            front=rear=t;
        else
        {
            rear->next=t;
            rear=t;
        }
    }
}


int dequeue()
{
    int x=-1;
    struct Node* t;

    if(front==NULL)
        printf("queue is empty\n");
    else
    {
        x=front->data;
        t=front;
        front=front->next;
        free(t);
    }
    return x;
}

void display()
{
    struct Node *p=front;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
*/
void create(struct Queue *q,int size)
{
    q->size =size;
    q->front=q->rear=-1;
    q->Q=(int*)malloc(q->size*sizeof(int));
}

void enqueue(struct Queue *q, int x)
{
    if(q->rear==q->size-1)
        printf("queue is full");
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
}
int dequeue(struct Queue *q)
{

    int x=-1;

    if(q->front==q->rear)
        printf("queue is empty");
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

void display(struct Queue q)
{
    for(int i=q.front+1;i<=q.rear;i++)
    {
        printf("%d ",q.Q[i]);
       printf("\n");
    }
}


int main()
{
  /*  enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    printf("%d ",dequeue());  */

    struct Queue q;
    create(&q,5);
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,50);
    display(q);
   printf("%d ",dequeue(&q));
    return 0;
}
