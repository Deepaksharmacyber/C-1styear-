//wap to find the square root of N number
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
   void main()
 {
   int i,n;
   float sq;
   clrscr();
   printf("enter any number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     sq = sqrt(i);
     printf("\n square root of %d is = %f",i,sq);
   }
    getch();
 }