#include<stdio.h>
int main()
{
    int o,p;
    char op;
    printf("\\\\\ this is a calculator/////");
    printf("\n + for addition: \n - for subtraction:\n * for multiplication:\n / for division:");
    printf("\n\nenter your choice what u ant to do:");
    scanf("%c",&op);
    printf("\nEnter two no.:");
    scanf("%d %d",&o,&p);
    switch(op)
    {
    case '+':
        printf("%d",o+p);
        break;
    case '-':
        printf("%d",o-p);
        break;
    case '*':
        printf("%d",o*p);
        break;
    case '/':
        if(p==0)
            printf("operation not perform");
        else
        printf("%d",o/p);
        break;
    deafault:
        printf("enter valid operation");
     }
return 0;
}
