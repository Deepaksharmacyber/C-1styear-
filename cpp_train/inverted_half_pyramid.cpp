//wap to print inverted hald pyramid.

#include <iostream>

using namespace std;

int main()
{
    int n ; 
    cin>>n;
    n = n + 1;
    while(n--){
        for(int i=0;i<n;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}