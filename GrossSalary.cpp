//https://www.codechef.com/problems/FLOW011
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int t ,salary;
	cin>>t;
	float HRA ,DA ,Gross_salary ;
	while(t--){
	    cin>>salary;
	    if (salary<1500){
	        HRA = float(10*salary)/100;
	        DA = float(90*salary)/100;
	        Gross_salary =(salary + HRA + DA) ;
	        cout<<fixed << setprecision(2) << Gross_salary<<endl;
	    }
	    else {
	        HRA = 500;
	        DA = float(98*salary)/100;
	        Gross_salary = (salary + HRA + DA) ;
	        cout<<fixed << setprecision(2) << Gross_salary<<endl;
	    }
	}
	return 0;
}
