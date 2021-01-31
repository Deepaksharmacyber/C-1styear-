//wap to find sum of 2 matrix of size 3*3.
#include<stdio.h>
#include<conio.h>
 void main()
 {
 int a[3][3],b[3][3],c[3][3],i,j;
 clrscr();
 printf("\n enter elements in matrix a");
 for(i = 0;i<3;i++)
 {
 for(j = 0;j<3;j++)
 {
 scanf("%d",&a[i][j]);
 }
}
 printf("\n enter elements in matrix b");
 for(i = 0;i<3;i++)
 {
 for(j = 0;j<3;j++)
 {
 scanf("%d",&b[i][j]);
 }
}
 printf("\n resultant matrix is \n");
 for(i = 0;i<3;i++)
 {
 for(j = 0;j<3;j++)
 {
 c[i][j] = a[i][j] + b[i][j];
 printf("%d\t",c[i][j]);
 }
 printf("\n");
 }
 getch();
 }