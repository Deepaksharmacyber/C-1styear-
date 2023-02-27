//wap to print palindromic pattern in c++

#include <iostream>

using namespace std;

int main()
{
    int n ,a ;
    cin>>n;
    a = n-1;
    for(int i=1;i<=n;i++){
        for(int l=0;l<(a);l++){
            cout<<" ";
        }
        int count=i;
        for(int j=1;j<=i;j++){
            cout<<count;
            count--;
        }
        int b=2;
        for(int k=0;k<(i-1);k++){
            cout<<b;
            b = b+1;
        }
        for(int l=0;l<(a);l++){
            cout<<" ";
        }
        a = (a-1);
        cout<<endl;
    }

    return 0;
}
