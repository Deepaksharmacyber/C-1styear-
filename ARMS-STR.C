//wap to check whether a number is armstrong or not.
#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main()
 {
 int n,r,k,sum = 0;
 clrscr();
 printf("\n enter any number");
 scanf("%d",&n);
 k = n;
 while(n>0)
 {
 r = n % 10;
 sum = sum + pow(r,3);
 n = n / 10 ;
 }
 if (sum == k)
 printf("\n armstrong number");
 else
  printf("\n not armstrong number");
  getch();
  }
