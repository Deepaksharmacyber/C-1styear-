//wap to check whether a number is prime or not
#include<stdio.h>

  int main()
{
  int n,number=2;
  
  printf("\n enter a number");
  fflush(stdout);
  scanf("%d",&n);
  while(number<= n-1)
  { 
    if(n%number==0)
    {
    printf("\n not a prime number");
    fflush(stdout);
    getc(stdin);
    break;
   }
   else
    number++;
}
  if(number==n)
  printf("\n prime number");
  fflush(stdout);
  getc(stdin);

}