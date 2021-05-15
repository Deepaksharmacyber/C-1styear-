//wap to check whether a number is armstrong or not.
#include<stdio.h>

#include<math.h>
 int main()
 {
  int n,r,k,sum = 0;
 
  printf("\n enter any number");
  fflush(stdout);
  scanf("%d",&n);
  k = n;
  while(n>0)
   {
      r = n % 10;
      sum = sum + pow(r,3);
       n = n / 10 ;
   }
   if(sum == k){
    printf("%d armstrong number\n", k);
    fflush(stdout);
    } else{
    printf("%d  not armstrong number\n", k);
   fflush(stdout);}
   getc(stdin);
  }

