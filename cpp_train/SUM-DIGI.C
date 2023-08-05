//wap to find the sum of the digits of a number.
#include<stdio.h>

 int  main()
{
  int n,r,s=0;
  
  printf("enter any number");
  fflush(stdout);
  scanf("%d",&n);
  while(n>1)
{
  r = n % 10;
  s = s + r;
  n = n / 10;
}
  printf("\n sum of digits = %d",s);
  fflush(stdout);
  getc(stdin);
}
