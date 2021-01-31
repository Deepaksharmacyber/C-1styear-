//wap to check whether a string is palindrome or not.
#include<stdio.h>
#include<conio.h>
#include<string.h>
 void main()
 {
 char a[20],b[20];
 clrscr();
 printf("enter any string");
 gets(a);
 strcpy(b,a);
 strrev(b);
 if (strcmp(a,b)==0)
    printf("palindrome");
    else
     printf(" not palindrome");
     getch();
 }