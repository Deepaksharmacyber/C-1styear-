//https://www.codechef.com/problems/NONNEGPROD

#include <iostream>
using namespace std;

int main() {
    int t , n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],b=1;
        for(int i =0;i<n;i++){
            cin>>a[i];
            b = (b*a[i]);
        }
        if (b>=0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}