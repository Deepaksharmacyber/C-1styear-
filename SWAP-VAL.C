//wap to swap values of two variables using 3rd variables
#include<stdio.h>
#include<conio.h>
 void main()
 {
  int a,b,t;
  clrscr();
  printf("\n Enter two numbers");
  scanf("%d%d",&a,&b);
  t = a;
  a = b;
  b = t;
  printf("\n a =%d",a);
  printf("\n b =%d",b);
  getch();
  }