//wap to print fibonacci series upto a number entered by user.
 #include<stdio.h>
 
   int main()
 {
    int a = 0,b = 1,c = 0,n;
    
    printf("enter limit");
    fflush(stdout);
    scanf("%d",&n);
    printf("\n %d \t %d\t",a,b);
    fflush(stdout);
     while(( a + b)<=n)
 {
    c = a + b;
    printf("%d\t",c);
    fflush(stdout);
    a = b;
    b = c;
 }
   getc(stdin);
 }