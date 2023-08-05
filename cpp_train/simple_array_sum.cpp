https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

int arrary_sum_function(int n){
    int a[n],sum =0 ;
    for(int i= 0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    return sum ;
}
int main(){
    int n ;
    cin>>n;
    cout<<arrary_sum_function(n);

    return 0;
}