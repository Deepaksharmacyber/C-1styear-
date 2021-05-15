
#include<stdio.h>

int main(){
    int number = 0, divisor = 0, quotent = 1, product = 0;

    printf("enter the number to divide:");
    fflush(stdout);
    scanf("%d", &number);
    printf("%d is the number\n", number);

    printf("enter the number to divide with:");
    fflush(stdout);
    scanf("%d", &divisor);
    printf("%d is the divisor\n", divisor);

    while(number - product > divisor){
        quotent = quotent + 1;
        product = quotent * divisor;
    }
    printf("quotent is %d", quotent);
    return 0;
}