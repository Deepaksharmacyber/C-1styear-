//https://www.codechef.com/problems/NONNEGPROD

#include <iostream>
using namespace std;

int main() {
    int t , n;
    cin>>t;
    while(t--){
        cin>>n;
        int a;
        bool b = false;
        bool found_zero = false;
        for(int i = 0; i < n; i++ ){
            cin>>a;
            if (found_zero){
                continue;
            }else if ( a < 0){
                b = !b;
            }else if (a == 0){
                b = false;
                found_zero = true;
            }
        }
        if (b == false){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}