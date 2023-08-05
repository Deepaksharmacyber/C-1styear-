//wap to find length of a string without using inbult function.
#include<stdio.h>

 int main()
 {
 char n[50];
 int i,l = 0;
 
 printf("enter a string");
 fflush(stdout);
 gets(n);
 for(i=0;n[i]!='\0';i++)
 l++;
 printf("length of string is = %d",l);
 fflush(stdout);
 getc(stdin);
 }