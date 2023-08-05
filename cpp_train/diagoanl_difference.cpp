//https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true&h_r=next-challenge&h_v=zen


#include <bits/stdc++.h>

using namespace std;

int diagonal_difference(int n){
    int arr[n],sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i];
            if(i==j){
                sum1 += arr[i];
            }
            if(i+j==n-1){
                sum2 += arr[i];
            }
        }
    }
    return abs(sum1-sum2);
}
int main(){
    int n ;
    cin>>n ;
    cout<<diagonal_difference(n);
    
    return 0;
}