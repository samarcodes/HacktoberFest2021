#include<stdio.h>
//#include<string.h>
main()
{
    int i,l;
    char str[50],ch;
    printf("enter a string:");
    gets(str);
    //strrev(str);
    //printf("%s",str);
    for(l=0;str[l];l++);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }
    printf("reverse is:
            %s",str);
    return 0;

}
