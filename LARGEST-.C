//wap to find largest of 3 numbers.
#include<stdio.h>

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
  imt  main()
  {
  int m,n,o,p;
  int largest (int,int,int);
  
  printf("enter 3 numbers");
  fflush(stdout);
  scanf("%d%d%d",&m,&n,&o);
  p = largest(m,n,o);
  printf("\n Result = %d",p);
  fflush(stdout);
  getc(stdin);
  }