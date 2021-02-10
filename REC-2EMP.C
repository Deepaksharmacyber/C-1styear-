//wap to enter record of an 2 employee and display it.
#include<stdio.h>
#include<conio.h>
 void main()
 {
 struct emp
 {
 char name[20];
 int age;
 float sal;
 } e1,e2;

  clrscr();
  printf("enter name of first employee");
  gets(e1.name);
  printf("enter name of second employee");
  gets(e2.name);

  printf("enter age of first employee");
  scanf("%d",&e1.age);
  printf("enter age of second employee");
  scanf("%d",&e2.age);
  printf("\n enter salary of first employee");
  scanf("%f",&e1.sal);
  printf("\n enter salary of second employee");
  scanf("%f",&e2.sal);

  printf("\n entered record is");
  printf("\n name of first employee=");
  puts(e1.name);
  printf("\n age of first employee=%d",e1.age);
  printf("\n sal of first employee=%f",e1.sal);
  printf("\n name of second employee=");
  puts(e2.name);
  printf("\n age of second employee=%d",e2.age);
  printf("\n sal of second employee=%f",e2.sal);
  getch();
  }