//wap to enter record of 5 employee and display it.
#include<stdio.h>
#include<conio.h>
 void main()
 {
 int i;
 struct emp
 {
 int age;
 int sal;
 }e[5];
 printf("\n enter salary of 5 employee\n");
 for(i=1;i<=5;i++)
 {
 printf("enter age of %d employee",i);
 scanf("%d",&e[i].age);
 printf("enter salary of %d employee",i);
 scanf("%d",&e[i].sal);
 }
 printf("\n entered record is");
 for(i=1;i<=5;i++)
 {
 printf("\n age of %d employee is =%d",i,e[i].age);
 printf("\n salary of %d employee =%d",i,e[i].sal);
 printf("\n");
 }
 getch();
 }