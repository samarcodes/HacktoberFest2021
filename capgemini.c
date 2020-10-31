#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
struct Node *next;
}*first=NULL;


void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first= (struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t= (struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int count(struct Node*p)
{
  int l=0;
  while(p)
  {
      l++;
      p=p->next;
  }
  return l;
}


void insert(struct Node*p,int pos,int x)
{
    struct Node*t;
    if(pos<0 || pos>count(p))
        return;
    t= (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    if(pos==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

int delete(struct Node*p,int pos)
{
    struct Node *q;
    int x=-1;
     int i;

    if(pos<1 || pos>count(p))
        return x;
    if(pos==1)
    {
        q=first;
        x=first->data;
        first=first->next;
        free(q);
        return x;
    }
    else
    {
         for(i=0;i<pos-1;i++)
         {
             q=p;
             p=p->next;
         }
         q->next=p->next;
         x=p->data;
         free (p);
         return x;
    }
}


void display(struct Node*p)
{
    while(p!=0)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

void lsearch(struct Node*p)
{

}

int main()
{

    insert(first,0,20);
    insert(first,1,25);
    insert(first,2,50);
    insert(first,3,70);
    insert(first,4,80);
    insert(first,5,100);
   // printf("Deleted element is: %d\n", delete(first,3));
   lsearch(first);
    display(first);
    return 0;
}
