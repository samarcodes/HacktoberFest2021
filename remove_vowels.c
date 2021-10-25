#include<stdio.h>
#include<string.h>
main()
{
    int i,vow;
 char str[50];
 printf("enter string:");
 gets(str);
 for(i=0;i<strlen(str);i++)
 {
    vow=str[i];
 if(vow=='a'|| vow=='e'||vow=='i'||vow=='o'||vow=='u')
    continue;
 printf("%c",str);
 }
 return 0;
}
