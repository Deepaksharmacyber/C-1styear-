//https://www.codechef.com/problems/NONNEGPROD

#include <iostream>
using namespace std;

int main() {
    int test_count = 0, number_count = 0;
    cin>>test_count;
    while(test_count--){
        cin>>number_count;
        int input_number = 0;
        bool is_negative_count_odd = false;
        bool found_zero = false;
        for(int index = 0; index < number_count; index++ ){
            cin>>input_number;
            if (found_zero){
                continue;
            }else if ( input_number < 0){
                is_negative_count_odd = !is_negative_count_odd;
            }else if (input_number == 0){
                is_negative_count_odd = false;
                found_zero = true;
            }
        }
        if (is_negative_count_odd == false){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}
