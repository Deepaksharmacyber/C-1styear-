//wap to find the roots of a quadratic equation ;

   #include<stdio.h>
   
   #include<math.h>
      int  main()
    {
       float a,b,c,d,root1, root2;
       
       printf("enter the coefficient of n^ 2");
       fflush(stdout);
       scanf("%f",&a);
       printf("enter the coefficient of x");
       fflush(stdout);
       scanf("%f",&b);
       printf("enter the const and term");
       fflush(stdout);
       scanf("%f",&c);
       d = sqrt((b*b)-(4*a*c));
	 if(d>=0)
      {
	root1 =(-b+d)/(2.0*a);
	root2 =(-b-d)/(2.0*a);
	printf("\n first root :%f\n",root1);
      fflush(stdout);
	printf("\n second root :%f\n",root2);
      fflush(stdout);
      }
	else
       {
	 printf("\n roots are imaginary");
       fflush(stdout);
	 getc(stdin);
       }
      }

