//wap to print numbers pattern in c++

#include <iostream>

using namespace std;

int main()
{
    int n ,a ,b=0;
    cin>>n;
    a = (n-1);
    for(int i=1;i<=n;i++){
        for(int j=0;j<a;j++){
            cout<<" ";
        }
        int count = 1;
        for(int k=0;k<(i+b);k++){
            if(k%2==0){
                cout<<count;
                count++;
            }
            else {
                cout<<" ";
            }
        }
        for(int j=0;j<a;j++){
            cout<<" ";
        }
        a = (a-1);
        b = b+1;
        cout<<endl;
    }

    return 0;
}
