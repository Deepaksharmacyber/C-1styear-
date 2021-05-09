//wap to check whether a number is prime or not
#include<stdio.h>

int main()
{
  int n,number=2;
  printf("\n enter a number");
  scanf("%d",&n);
  while(number<= n-1)
  {
    if(n%number==0)
    {
      printf("%d is not a prime number", n);
      getc(stdin);
      break;
    }
    else
      number++;
  }
  if(number==n)
    printf("%d is a prime number\n", number);
  getc(stdin);
}