//wap to multiply 2 matrix of size 3*3 .
#include<stdio.h>
#include<conio.h>
 void main()
 {
 int a[3][3],b[3][3],c[3][3],i,j,k;
 clrscr();
 printf("enter elements in matrix a");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 scanf("%d",&a[i][j]);
 }
}
 printf("enter elements in matrix b");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 scanf("%d",&b[i][j]);
 }
}
 printf("\n resultant matrix is =");
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 c[i][j]=0;
 for(k=0;k<3;k++)
 {
 c[i][j]=c[i][j]+a[i][k]*b[k][j];
 }
 printf("%d\t",c[i][j]);
 }
 printf("\n");
 }
 getch();
 }