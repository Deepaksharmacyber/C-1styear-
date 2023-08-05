//wap to check whether a string is palindrome or not.
#include<stdio.h>

#include<string.h>
 int  main()
 {
 char a[20],b[20];
 
 printf("enter any string");
 fflush(stdout);
 gets(a);
 strcpy(b,a);
 strsep(b);
 if (strcmp(a,b)==0)
    printf("palindrome");
    fflush(stdout);
    else
     printf(" not palindrome");
     fflush(stdout);
     getc(stdin);
 }