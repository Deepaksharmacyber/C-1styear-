//wap to enter record of an 2 employee and display it.
#include<stdio.h>

 int  main()
 {
 struct emp
 {
 char name[20];
 int age;
 float sal;
 } e1,e2;

  
  printf("enter name of first employee");
  fflush(stdout);
  gets(e1.name);
  printf("enter name of second employee");
  fflush(stdout);
  gets(e2.name);

  printf("enter age of first employee");
  fflush(stdout);
  scanf("%d",&e1.age);
  printf("enter age of second employee");
  fflush(stdout);
  scanf("%d",&e2.age);
  printf("\n enter salary of first employee");
  fflush(stdout);
  scanf("%f",&e1.sal);
  printf("\n enter salary of second employee");
  fflush(stdout);
  scanf("%f",&e2.sal);

  printf("\n entered record is");
  fflush(stdout);
  printf("\n name of first employee=");
  fflush(stdout);
  puts(e1.name);
  printf("\n age of first employee=%d",e1.age);
  fflush(stdout);
  printf("\n sal of first employee=%f",e1.sal);
  fflush(stdout);
  printf("\n name of second employee=");
  fflush(stdout);
  puts(e2.name);
  printf("\n age of second employee=%d",e2.age);
  fflush(stdout);
  printf("\n sal of second employee=%f",e2.sal);
  fflush(stdout);
  getc(stdin);
  }