//wap to enter record of 5 employee and display it.
#include<stdio.h>

 int main()
 {
 int i;
 struct emp
  {
    int age;
    int sal;
  }e[5];
  printf("\n enter salary of 5 employee\n");
  fflush(stdout);
  for(i=1;i<=5;i++)
  {
     printf("enter age of %d employee",i);
     fflush(stdout);
    scanf("%d",&e[i].age);
    printf("enter salary of %d employee",i);
    fflush(stdout);
    scanf("%d",&e[i].sal);
  }
   printf("\n entered record is");
   fflush(stdout);
   for(i=1;i<=5;i++)
   {
    printf("\n age of %d employee is =%d",i,e[i].age);
    fflush(stdout);
    printf("\n salary of %d employee =%d",i,e[i].sal);
    fflush(stdout);
    printf("\n");
    fflush(stdout);
  }
  getc(stdin);
 }