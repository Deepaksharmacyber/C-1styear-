//wap to print weather number is prime or not 

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"number is not prime";
            break;
        }
    }
    if(n==i){
        cout<<"number is prime";
    }
    

    return 0;
}
