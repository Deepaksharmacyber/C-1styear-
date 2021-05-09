//wap to find the exponential of the number;
 #include<stdio.h>
 #include<math.h>
   int main()
  {
    int n, flood;
    double ex;
    
    printf("enter a number:");
    fflush(stdout);
    scanf("%d",&n);
    ex = exp (n);
    printf("the exponential of %d =%f\n",n,ex);
    fflush(stdout);
    getc(stdin);
  }