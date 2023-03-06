//https://www.hackerrank.com/challenges/birthday-cake-candles/problem?h_r=next-challenge&h_r=next-challenge&h_v=zen&h_v=zen&isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen



#include <bits/stdc++.h>

using namespace std;

int birthday_cake_candles(int n){
    int arr[n],b;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    b = (sizeof(arr))/(sizeof(arr[0]));
    sort(arr,arr+b);
    int max_term = arr[n-1],count=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==max_term){
            count += 1;
        }else {
            break;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<birthday_cake_candles(n);
    return 0;
}

