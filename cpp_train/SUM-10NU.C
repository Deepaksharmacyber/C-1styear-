 //wap to find sum of first 10 numbers(1 to 10)
 #include<stdio.h>
 
   int  main()
 {
   int i,sum=0;
   
   for(i=1;i<=10;i++)
 {
   sum = sum + i;
 }
   printf("\n sum = %d",sum);
   fflush(stdout);
   getc(stdin);
 }