//wap to find factorial of a number
#include<stdio.h>


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
 int main()
 {
 int m,d;
 int fact(int m);
 
 printf("enter any number");
 fflush(stdout);
 scanf("%d",&m);
 d = fact(m);
 printf("\n result = %d",d);
 fflush(stdout);
 getc(stdin);
 }