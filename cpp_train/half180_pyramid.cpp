//wap to print half 180 pyramid .

#include<iostream>
using namespace std ;

int main(){
    int n ;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=(n-i)){
                cout<<" ";
            }
            else {
                cout<<"*";
            }
        }
        cout<<endl;
    }
}