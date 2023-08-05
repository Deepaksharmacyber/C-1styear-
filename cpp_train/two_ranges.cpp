//https://www.codechef.com/problems/TWORANGES

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    int a , b ,c,d ;
	    cin>>a>>b>>c>>d;
	    set<int> s;
	    for(int i=a;i<=b;i++){
	        s.insert(i);
	    }
	    for(int i=c;i<=d;i++){
	        s.insert(i);
	    }
	    cout<<s.size()<<endl;
	}
	return 0;
}