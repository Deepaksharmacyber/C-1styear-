//wap to check whether a number is even or odd
#include<stdio.h>

 int main()
{
 int n;

 printf("\n enter a number");
 fflush(stdout);
 scanf("%d",&n);
 if(n%2 ==0){
  printf("\n even number");
  fflush(stdout);
 }else {
  printf("\n odd number");
  fflush(stdout);
  getc(stdin);}
 }