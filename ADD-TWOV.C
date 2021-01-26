//wap to add two numbers(call by value)
#include<stdio.h>
#include<conio.h>

 int add(int a, int b)
 {
  int c;
  c = a + b;
  return(c);
  }
   void main()
  {
   int a,b,d;
   int add (int a, int b);
   clrscr();
   printf("enter 2 numbers");
   scanf("%d%d",&a,&b);
   d = a + b;
   printf("\n result = %d",d);
   getch();
  }