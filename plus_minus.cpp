//https://www.hackerrank.com/challenges/plus-minus/problem?h_r=next-challenge&h_r=next-challenge&h_v=zen&h_v=zen&isFullScreen=true

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int plus_minus(int n){
    int arr[n] , count_1 =0,count_2 =0 ,count_3 =0 ;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]>0){
            count_1 += 1;
        }
        else if(arr[i]<0){
            count_2 += 1;
        }
        else{
            count_3 += 1;
        }
    }
    cout<<fixed<<setprecision(6)<<double(count_1)/n<<endl;
    cout<<fixed<<setprecision(6)<<double(count_2)/n<<endl;
    cout<<fixed<<setprecision(6)<<double(count_3)/n<<endl;
    
    return 0 ;
}
int main(){
    int n ;
    cin>>n;
    plus_minus(n);

    return 0;
}
