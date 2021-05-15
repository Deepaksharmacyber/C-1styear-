//wap to search an element from a 2D array using linear search method.
#include<stdio.h>

#include<stdlib.h>
 int  main()
 {
 int n[10][10],i,j,r,c,s;
 
 printf("\n how many rows and columns");
 fflush(stdout);
 scanf("%d%d",&r,&c);
 printf("\n enter elements in array");
 fflush(stdout);
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d",&n[i][j]);
  }
}
 printf("\n enter elements to be searched");
 fflush(stdout);
 scanf("%d",& s);
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if(n[i][j] == s)
  {
   printf("elements found at %d row and %d column",i,j);
  fflush(stdout);
   getc(stdin);
   exit(1);
   }
  }
 }
 printf("element not found");
 fflush(stdout);
 getc(stdin);
 }