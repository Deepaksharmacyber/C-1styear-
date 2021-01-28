//wap to printf fibbonacci series.
#include<stdio.h>
#include<conio.h>
 void main()
 {
 int a = 0, b = 1, c = 0,n;
 clrscr();
 printf("\n enter limit");
 scanf("%d",&n);
 printf("%d\t%d\t",a,b);
 while(c<=n)
 {
 c = a + b;
 printf("%d\t",c);
 a = b;
 b = c;
 }
 getch();
 }