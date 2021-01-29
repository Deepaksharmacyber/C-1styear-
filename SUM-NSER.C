//wap to find sum of 1 + 2 + 3 +.... + n series.
#include<stdio.h>
#include<conio.h>
 void main()
 {
  int i,n,sum = 0;
  clrscr();
  printf("enter limit");
  scanf("%d",&n);
  for(i = 1;i<=n;i++)
  {
  sum = sum + i;
  }
  printf("\n sum = %d",sum);
  getch();
  }