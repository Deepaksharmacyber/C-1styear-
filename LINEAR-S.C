//wap to search an element from an array using linear search method
  #include<stdio.h>
  #include<conio.h>
      void main()
    {
      int n[5],i,c;
      clrscr();
      printf("enter element in array");
      for(i=0;i<5;i++)
      {
       scanf("%d",&n[i]);
      }
      printf("enter elements to be searched");
      scanf("%d",&c);
      for(i=0;i<5;i++)
       {
	 if(n[i]==c)
       {
	  printf("element found");
	  getch();
	  break;
	 }
     }
      if(i==5)
      printf("element not found");
      getch();
    }