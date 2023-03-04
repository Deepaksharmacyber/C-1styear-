//https://www.hackerrank.com/challenges/staircase/problem?h_r=next-challenge&h_r=next-challenge&h_v=zen&h_v=zen&isFullScreen=true&h_r=next-challenge&h_v=zen

#include <bits/stdc++.h>

using namespace std;

int stair_case(int n){
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int h=0;h<i;h++){
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int n ;
    cin>>n;
    stair_case(n);
    return 0;
}
