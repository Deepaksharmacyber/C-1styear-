//wap to find length of a string without using inbult function.
#include<stdio.h>
#include<conio.h>
 void main()
 {
 char n[50];
 int i,l = 0;
 clrscr();
 printf("enter a string");
 gets(n);
 for(i=0;n[i]!='\0';i++)
 l++;
 printf("length of string is = %d",l);
 getch();
 }