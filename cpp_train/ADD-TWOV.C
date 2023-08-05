//wap to add two numbers(call by value)
#include<stdio.h>


 int add(int a, int b)
 {
  int c;
  c = a + b;
  return(c);
  }
   int main()
  {
   int a,b,d;
   int add (int a, int b);
   
   printf("enter 2 numbers");
   fflush(stdout);
   scanf("%d%d",&a,&b);
   d = a + b;
   printf("\n result = %d",d);
   fflush(stdout);
   getc(stdin);
  }