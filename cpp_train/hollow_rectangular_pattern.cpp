//wap to print hollow rectangular pattern

#include <iostream>

using namespace std;

int main()
{
    int row , column ;
    cin>>row>>column;
    for(int i=0;i<row;i++){
        if((i==0)||(i==(row-1))){
            for(int r=0;r<column;r++){
                cout<<"*";
            }
        }
        else {
            for(int t=0;t<column;t++){
                if((t==0)||(t==(column-1))){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}