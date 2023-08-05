

 //wap to add two numbers
 #include<stdio.h>
 
  int add (int a,int b)
  {
  int c;
  c = a + b;
  return(c);
  }
   int main()
  {
  int a,b,d;
  int add(int a,int b);
  
  printf("\n enter 2 numbers");
  fflush(stdout);
  scanf("%d%d",&a,&b);
  d =add(a,b);
  printf("\n result =%d",d);
  fflush(stdout);
  getc(stdin);

  }