//wap to find area and circunference of a circle
#include<stdio.h>

   int  main()
 {
   float A,C;
   int r;
   
   printf("\n enter value of radius");
   fflush(stdout);
   scanf("%d",&r);
   A = 3.14*r*r;
   C = 3.14*2*r;
   printf("\n area = %f",A);
   printf("\n cir = %f",C);
   fflush(stdout);
   getc(stdin);
 }