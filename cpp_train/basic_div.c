
#include<stdio.h>

int main(){
    int number = 0, divisor = 0, quotent = 0, product = 0, difference = 0;

    printf("enter the number to divide:");
    fflush(stdout);
    scanf("%d", &number);
    printf("%d is the number\n", number);

    printf("enter the number to divide with:");
    fflush(stdout);
    scanf("%d", &divisor);
    printf("%d is the divisor\n", divisor);

    do{
        quotent = quotent + 1;
        product = quotent * divisor;
        difference = number - product;
        printf("quotent:%d product:%d number:%d difference:%d\n",
             quotent,product, number, difference);
    }while(difference >= divisor);
    printf("answer is %d\n", quotent);
    return 0;
}