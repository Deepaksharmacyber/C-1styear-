//wap to find sum of 1 + 2 + 3 +.... + n series.
#include<stdio.h>

 int  main()
 {
  int i,n,sum = 0;
  
  printf("enter limit");
  fflush(stdout);
  scanf("%d",&n);
  for(i = 1;i<=n;i++)
  {
  sum = sum + i;
  }
  printf("\n sum = %d",sum);
  fflush(stdout);
  getc(stdin);
  }