//wap to print  number if it is negative 
#include<stdio.h>
int main()
{
    int number;
    printf("enter a number:");
    fflush(stdout);
    scanf("%d",&number);

    if(number<0){
        printf("the number is negative \n ");
        fflush(stdout);
    } 
    else if(number>0)
    {
        printf("the number is postive \n ");
       fflush(stdout);
    }
    
} 