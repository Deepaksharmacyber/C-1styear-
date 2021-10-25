
#include<stdio.h>

int main(){
    int number = 0,square = 0, difference = 0, trial = 0;
    
    printf("enter the number to find square:");
    fflush(stdout);
    scanf("%d",&number);
    printf("%d is the number\n",number);

    do{
        trial = trial + 1;
        square = trial * trial ;
      
     difference = number - square ;
     printf("trial:%d square:%d number:%d difference:%d\n",trial,square,number,difference);
     fflush(stdout);
     }while(difference>0);
     printf("answer is %d\n",trial);
     fflush(stdout);
     return 0;
}


