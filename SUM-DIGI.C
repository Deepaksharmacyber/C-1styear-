//wap to find the sum of the digits of a number.
#include<stdio.h>
#include<conio.h>
 void main()
{
  int n,r,s=0;
  clrscr();
  printf("enter any number");
  scanf("%d",&n);
  while(n>1)
{
  r = n % 10;
  s = s + r;
  n = n / 10;
}
  printf("\n sum of digits = %d",s);
  getch();
}
