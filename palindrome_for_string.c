#include<stdio.h>
int main()
{
 char ch[20];
 int i,l;
 printf("enter a string:");
 gets(ch);
 l=strlen(ch);
 for(i=0;i<l/2;i++)
 {
   if(ch[i]!=ch[l-1-i])
   {
   printf("\n\\\ not a palindrome///");
   break;
   }
 }
 if(i==l/2)
    printf("\npalindrome");
 return 0;
}
