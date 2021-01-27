//wap to find largest of 3 numbers.
#include<stdio.h>
#include<conio.h>
 int largest(int a, int b, int c)
 {
 int t;
 if((a>b)&&(a>c))
 t = a;
 if((b>a)&&(b>c))
 t = b;
 if((c>a)&&(c>b))
 t = c;
 return(t);
 }
  void main()
  {
  int m,n,o,p;
  int largest (int,int,int);
  clrscr();
  printf("enter 3 numbers");
  scanf("%d%d%d",&m,&n,&o);
  p = largest(m,n,o);
  printf("\n Result = %d",p);
  getch();
  }