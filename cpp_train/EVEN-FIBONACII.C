#include<stdio.h>
int main()
{
    long int sum;
    sum = 0;
    long int i;
    i = 0;
    long int j;
    j = 2;
    long int k;

    do
    {
        k = i + j;
        if(k%2 == 0)
        sum = k;
        i = j;
        j = k; 
    } while (k<4000000);
    printf("%ld \n",sum);
    fflush(stdout);
    return 0;
}