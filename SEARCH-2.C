//wap to search an element from a 2D array using linear search method.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 void main()
 {
 int n[10][10],i,j,r,c,s;
 clrscr();
 printf("\n how many rows and columns");
 scanf("%d%d",&r,&c);
 printf("\n enter elements in array");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d",&n[i][j]);
  }
}
 printf("\n enter elements to be searched");
 scanf("%d",& s);
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if(n[i][j] == s)
  {
   printf("elements found at %d row and %d column",i,j);
   getch();
   exit(1);
   }
  }
 }
 printf("element not found");
 getch();
 }