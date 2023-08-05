//program to relate two integers using =,> or < symbol
#include<stdio.h>
int main()
{
    int number1 , number2;
    printf("enter two numbers");
    fflush(stdout);
    scanf("%d %d", &number1, &number2);
     
    if(number1 == number2){
        printf("result : %d = %d \n ", number1 , number2);
        fflush(stdout);
    }
    else if(number1 > number2)
    {
    printf("result: %d > %d \n",number1 , number2);
    fflush(stdout);
    }
    else 
    {
    printf("result: %d < %d \n",number1,number2);
    fflush(stdout);
    }
    return 0;
}
