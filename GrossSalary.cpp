#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	vector<int> salaries;
	cin>>t;
	float HRA ,DA ,Gross_salary ;
	// receive input
	while(t--){
		int salary;
		cin >> salary;
		salaries.push_back(salary);
	}
	t = salaries.size();
	for (int index = 0; index < t; index++){
		int salary = salaries[index];
	    if (salary<1500){
	        HRA =(float(10*salary)/100);
	        DA = (float(90*salary)/100);
	        Gross_salary =(salary + HRA + DA) ;
	        cout<<fixed<<setprecision(2)<<Gross_salary<<endl;
	    }
	    else {
	        HRA = 500;
	        DA = (float(98*salary)/100);
	        Gross_salary = (salary + HRA + DA) ;
	        cout<<fixed<<setprecision(2)<<Gross_salary<<endl;
	    }
	}
	return 0;
}
