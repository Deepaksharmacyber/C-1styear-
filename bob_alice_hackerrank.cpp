//https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true


#include <bits/stdc++.h>

using namespace std;

int main(){
    

int alice[3],bob[3], a=0 , b=0;
cin>>alice[0]>>alice[1]>>alice[2];
cin>>bob[0]>>bob[1]>>bob[2];
if(alice[0]>bob[0]){
    a = a+1;
}
else if(alice[0]<bob[0]){
    b = b+1;
}
else {
    a = a ;
    b = b ;
}
if(alice[1]>bob[1]){
    a = a+1;
}
else if(alice[1]<bob[1]){
    b = b+1;
}
else {
    a = a ;
    b = b ;
}
if(alice[2]>bob[2]){
    a = a+1;
}
else if(alice[2]<bob[2]){
    b = b+1;
}
else {
    a = a ;
    b = b ;
}
cout<<a<<" "<<b;


return 0 ;
}