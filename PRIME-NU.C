//wap to check whether a number is prime or not
#include<stdio.h>
#include<conio.h>
  void main()
{
  int n,number=2;
  clrscr();
  printf("\n enter a number");
  scanf("%d",&n);
  while(number<= n-1)
{
  if(n%number==0)
{
  printf("\n not a prime number");
  getch();
  break;
}
  else
  number++;
}
  if(number==n)
  printf("\n prime number");
  getch();
}