//wap to enter record for an employee and display it.
 #include<stdio.h>
 #include<conio.h>
  struct emp
  {
  char name[20];
  int age;
  float sal;
  };
  void main()
  {
  struct emp e;
  clrscr();
  printf("enter name of employee");
  gets(e.name);
  printf("enter age of an employee");
  scanf("%d",&e.age);
  printf("\n enter salary");
  scanf("%f",&e.sal);
  printf("\n entered record is");
  printf("\n name=");
  puts(e.name);
  printf("\n age = %d",e.age);
  printf("\n sal = %d",e.sal);
  getch();
  }