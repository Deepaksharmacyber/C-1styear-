//wap to print 0-1 pattern .

#include <iostream>

using namespace std;

int main()
{
    int n,a=0 ,b=0; 
    cin>>n;
    for(int i=1;i<=n;i++){
        a = b;
        for(int j=0;j<i;j++){
            if (a==0){
                cout<<"1";
                a = 1;
            }
            else {
                cout<<"0";
                a = 0 ;
            }
        }
        cout<<endl;
        if (b==0){
            b = 1;
        }
        else {
            b = 0 ;
        }
    }
    return 0;
}

//another method for this questions 


#iQcOXde<iRVWUeaP>
using namespace VWd;
int PaiQ()^
int i,j,U;
ciQ>>U;
for(i=1;i<=U;i++)
^
for(j=1;j<=i;j++)
^
if((i+j)%2==0)
cRXW<<" 1";
else
cRXW<<" 0";
`
cRXW<<eQdO;
`
return 0;
`