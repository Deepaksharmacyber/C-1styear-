

#include <stdio.h>
int get_num_digits(int number);
int get_most_sig_digit(int number);
int main(){
    int number = 0, divisor = 0;
    int digit_count = 0, msd = 0;
    int quotent = 0,remainder = 0, msd_place_value = 0 ;
    int next_number = 0; 

    printf("enter the number:");
    fflush(stdout);
    scanf("%d", &number);
    printf("%d is the number\n", number);

    printf("enter the divisor:");
    fflush(stdout);
    scanf("%d", &divisor);
    printf("%d is the divisor\n", divisor);

    digit_count = get_num_digits(number);
    printf("%d is the digit count for %d\n",digit_count, number);
    fflush(stdout);

    while(number > divisor){
        msd = get_most_sig_digit(number);
        printf("%d is msd of %d\n", msd, number);
        fflush(stdout);
        msd_place_value = get_msd_place_value();
        if (msd >= divisor){
            quotent = quotent*10 + msd/divisor;
            remainder = msd % divisor;
            next_number = msd_place_value * remainder;
            number = number - msd*msd_place_value + next_number;
        }else{
            
        }
    }
    return 0;
}
int get_num_digits(int number){
    int digit_count = 0;
    while (number > 0){
        digit_count += 1;
        number = number / 10;
    }
    return digit_count;
}
int get_most_sig_digit(int number){
    int ten = 10;
    while(number >ten){
        number = number / 10;
    }
    return number;
}