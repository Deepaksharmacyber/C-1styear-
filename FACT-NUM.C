//wap to find factorial of a number
#include<stdio.h>
#include<conio.h>

int fact(int n)
{
 int f = 1;
 while(n>=1)
 {
 f = f * n;
 n--;
 }
 return(f);
 }
 void main()
 {
 int m,d;
 int fact(int m);
 clrscr();
 printf("enter any number");
 scanf("%d",&m);
 d = fact(m);
 printf("\n result = %d",d);
 getch();
 }