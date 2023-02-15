#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,x,y,k;
	cin>>t;
	while(t--){
	    cin>>x>>y>>k;
	    if(x%k==0&&y%k==0) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}

