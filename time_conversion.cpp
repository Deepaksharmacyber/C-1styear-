//https://www.hackerrank.com/challenges/time-conversion/problem?h_r=next-challenge&h_r=next-challenge&h_v=zen&h_v=zen&isFullScreen=true&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen


//#include <bits/stdc++.h>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//   char s[10];
//    cin>>(s);
//    if(s[8]=='A'){
//        if(s[0]=='1'&&s[1]=='2'){
//            s[0]=s[1]='0';
//        }
//    }
//    else {
//        if(s[1]=='8'){
//            s[0]='2';
//            s[1]='0';
//        }
//        else if(s[2]=='9'){
//            s[0]='2';
//            s[1]='1';
//        }
//        else if (!(s[0]=='1'&&s[1]=='2')){
//            s[0] += 1;
//            s[1] += 2;
//        }
//    }
//    s[8]='\0';
//    puts(s);
//    return 0;
//}
//
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string hour_string = s.substr(0,2);
    int hour  = atoi(s.substr(0,2).c_str());
    string min_str  = s.substr(3,2);
    string sec_str = s.substr(6,2);
    bool is_before_noon = s.substr(8,2).find("AM") == s.npos ? false : true;
    if (is_before_noon && hour == 12){
        hour_string = "00";
    }else if (!is_before_noon){
        if (hour != 12) hour += 12;
        char buffer[3];
        sprintf(buffer, "%d", hour);
        hour_string = buffer;
    }
    string final_buffer = hour_string;
    final_buffer += ':';
    final_buffer += min_str + ':' + sec_str;
    return final_buffer;
}

int main()
{
    

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout  << result << "\n";


    return 0;
}
