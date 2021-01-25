 //wap to add two numbers
 #include<stdio.h>
 #include<conio.h>
  int add (int a,int b)
  {
  int c;
  c = a + b;
  return(c);
  }
   void main()
  {
  int a,b,d;
  int add(int a,int b);
  clrscr();
  printf("\n enter 2 numbers");
  scanf("%d%d",&a,&b);
  d =add(a,b);
  printf("\n result =%d",d);
  getch();
  }