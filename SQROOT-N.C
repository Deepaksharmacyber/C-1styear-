//wap to find the square root of N number
 #include<stdio.h>
 
 #include<math.h>
   int  main()
 {
   int i,n;
   float sq;
   
   printf("enter any number");
   fflush(stdout);
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     sq = sqrt(i);
     printf("\n square root of %d is = %f",i,sq);
     fflush(stdout);
   }
    getc(stdin);
 }