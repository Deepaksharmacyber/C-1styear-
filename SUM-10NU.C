 //wap to find sum of first 10 numbers(1 to 10)
 #include<stdio.h>
 #include<conio.h>
   void main()
 {
   int i,sum=0;
   clrscr();
   for(i=1;i<=10;i++)
 {
   sum = sum + i;
 }
   printf("\n sum = %d",sum);
   getch();
 }