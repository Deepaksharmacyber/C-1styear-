//https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true


#include <iostream>

using namespace std;

int grading_students(int num){
    for(int j=1;j<=num;j++){
        if(5*j>num){
            if((5*j)-num<3){
                if(5*j>38){
                    return 5*j;
                }
                else{
                    return num;
                    }
                }
            else{
                return num;
                }
        }
    }   
    return 0;
}

int main()
{
    int n,num;
    cin>>n;
    int arr[n];
    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    for(int i=0;i<n;i++){
        num = arr[i];
        cout<<grading_students(num)<<endl;
    }
    

    return 0;
}