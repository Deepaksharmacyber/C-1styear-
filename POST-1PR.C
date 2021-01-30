//wap to enter any postive number and number of 1's present in it.
#include<stdio.h>
#include<conio.h>
 void main()
 {
 int n,c = 0,r;
 clrscr();
 do
 {
 printf("enter any number");
 scanf("%d",&n);
 }
 while(n<=0);
 while(n>0)
 {
 r = n % 10;
 if (r == 1)
 {
 c++;
 }
 n = n/10;
 }
 printf("\n number of 1's = %d",c);
 getch();
 }