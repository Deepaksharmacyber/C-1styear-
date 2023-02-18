//wap to print inverted pattern 


#include <iostream>

using namespace std;

int main()
{
    int n,a ;
    cin>>n;
    a = n;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<a;j++){
            count++;
            cout<<count;
        }
        a = a -1;
        cout<<endl;
    }

    return 0;
}
