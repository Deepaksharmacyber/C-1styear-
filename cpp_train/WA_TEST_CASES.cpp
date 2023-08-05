
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int s[n];
	    for(int i = 0;i<n;i++){
	        cin>>s[i];
	    }
	    string v;
	    cin>>v;
	    int a = 10000000000,x;
	    for(int i=0;i<v.length();i++){
	        if(v[i]=='0'){
	            x =s[i];
	            a = min(a,x);
	        }
	    }
	    cout<<a<<endl;
	}
	return 0;
}
