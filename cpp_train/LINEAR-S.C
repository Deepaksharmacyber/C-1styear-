//wap to search an element from an array using linear search method
  #include<stdio.h>
  
      int main()
    {
      int n[5],i,c;
      
      printf("enter element in array");
      fflush(stdout);
      for(i=0;i<5;i++)
      {
       scanf("%d",&n[i]);
      }
      printf("enter elements to be searched");
      fflush(stdout);
      scanf("%d",&c);
      for(i=0;i<5;i++)
       {
	 if(n[i]==c)
       {
	  printf("element found");
    fflush(stdout);
	  getc(stdin);
	  break;
	 }
     }
      if(i==5)
      printf("element not found");
      fflush(stdout);
      getc(stdin);
    }