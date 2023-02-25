//wap to check weather number is prime or not 

#include <iostream>

using namespace std;

int main()
{
    int n,c,b=0;
    cin>>n;
    c = n;
    while(n>0){
        int a = n%10;
        a = a*a*a;
        b = b+a;
        n = n/10;
    }
    
    if(b==c){
        cout<<"armstrong number";
    }
    else {
        cout<<"not a armstrong";
    }
    return 0;
}
