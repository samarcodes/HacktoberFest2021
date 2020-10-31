#include<stdio.h>
#include<stdlib.h>

/*                                         USING    ARRAY
struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st)
{
    printf("enter size:");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int*)malloc(st->size*sizeof(int));
}

void display(struct Stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
        printf("%d ",st.S[i]);
    printf("\n");
}


void push(struct Stack *st, int x)
{
    if(st->top==st->size-1)
        printf("stack overflow");
    else{
        st->top++;
        st->S[st->top]=x;
    }
}

int pop(struct Stack *st)
{
    int x=-1;

    if(st->top==-1)
        printf("stack underflow");
    else
    {
        x=st->S[st->top--];
    }
    return x;
}



int main()
{
    struct Stack st;
    create(&st);
    push(&st,10);
     push(&st,20);
      push(&st,30);
       push(&st,40);
        push(&st,50);
         push(&st,60);

    printf("%d \n",pop(&st));
    display(st);

    return 0;
}    */



struct Node
{
    int data;
    struct Node *next;
}*top=NULL;

void push(int x)
{
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));

    if(t==NULL)
        printf("stack is full\n");
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

int pop()
{
    struct Node *t;
    int x=-1;
    if(top==NULL)
        printf("stack is empty\n");
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

void display()
{
    struct Node *p;
    p=top;
    while(p)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    pop();
    pop();
    display();
    return 0;
}
