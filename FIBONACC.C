//wap to print fibonacci series upto a number entered by user.
 #include<stdio.h>
 #include<conio.h>
   void main()
 {
    int a = 0,b = 1,c = 0,n;
    clrscr();
    printf("enter limit");
    scanf("%d",&n);
    printf("\n %d \t %d\t",a,b);
     while(( a + b)<=n)
 {
    c = a + b;
    printf("%d\t",c);
    a = b;
    b = c;
 }
   getch();
 }