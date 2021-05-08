//wap to find the exponential of the number;
 #include<stdio.h>
 #include<math.h>
   int main()
  {
    int n, flood, ex;
    
    printf("enter a number");
    scanf("%d",&n);
    ex = exp (n);
    printf("\n the exponential of %d =%f",n,ex);
    getc(stdin);
  }