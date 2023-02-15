https://www.codechef.com/problems/KTTABLE

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t ;
	cin>>t;
	while(t--){
	    int  n ,c=0 ,sum =0;
	    cin>>n;
	    long long a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        }
	     
	        sum = a[0];
	        for(int i =0;i<n;i++){
	            if(b[i]<=sum){
	                c  = (c+1);
	            }
	            sum = abs(a[i]-a[i+1]);
	        }
	    cout<<c<<endl;
	}
	return 0;
}
