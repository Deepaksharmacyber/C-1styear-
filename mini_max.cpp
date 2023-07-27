//https://www.hackerrank.com/challenges/mini-max-sum/problem?h_r=next-challenge&h_r=next-challenge&h_v=zen&h_v=zen&isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <bits/stdc++.h>

using namespace std;

int mini_max(int n){
    long long arr[n],sum_1=0,sum_2=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long a =(sizeof(arr)) /(sizeof(arr[0]));
    sort(arr, arr + a);
    for(int i=0;i<=n-2;i++){
        sum_1 += arr[i];
    }
    cout<<sum_1;
    cout<<" ";
    for(int i=n-1;i>0;i--){
        sum_2 += arr[i];
    }
    cout<<sum_2;
    return 0;
}
int main()
{
    int n ;
    n =5 ;
    mini_max(n);
    return 0;
}

