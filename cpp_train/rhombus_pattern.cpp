//wap to print rhombus pattern in c++

#include <iostream>

using namespace std;

int main()
{
    int n,a;
    cin>>n;
    a = n-1;
    for(int i=1;i<=5;i++){
        for(int j=0;j<1;j++){
            for(int k=0;k<a;k++){
                cout<<" ";
            }
            for(int l=0;l<n;l++){
                cout<<"*";
            }
        }
        a = a-1;
        cout<<endl;
    }

    return 0;
}
