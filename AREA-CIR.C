//wap to find area and circunference of a circle
#include<stdio.h>
#include<conio.h>
   void main()
 {
   float A,C;
   int r;
   clrscr();
   printf("\n enter value of radius");
   scanf("%d",&r);
   A = 3.14*r*r;
   C = 3.14*2*r;
   printf("\n area = %f",A);
   printf("\n cir = %f",C);
   getch();
 }