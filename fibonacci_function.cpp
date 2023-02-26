//wap to print fibonacci series by using function in c++ 


#include <iostream>

using namespace std;

void fib(int n){
    int num1 =0;
    int num2 =1;
    int nextterm ;
    
    for(int i=1;i<=n;i++){
        cout<<num1;
        nextterm = num1 + num2;
        num1 = num2;
        num2 = nextterm;
    }
    return ;
}

int main()
{
    int n;
    cin>>n;
    fib(n);

    return 0;
}
