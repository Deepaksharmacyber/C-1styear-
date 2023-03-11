//https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true&h_r=next-challenge&h_v=zen



#include <iostream>

using namespace std;

int count_apples_and_oranges(int starting_point,int end_point,int tree1, int tree2,int apples,int oranges){
    int arr1[apples],arr2[oranges],count1=0,count2=0;
    for(int i=0;i<apples;i++){
        cin>>arr1[i];
        arr1[i] = tree1 + arr1[i];
        if((starting_point<=arr1[i])&&(arr1[i]<=end_point)){
            count1 += 1 ;
        }
    }
    for(int i=0;i<oranges;i++){
        cin>>arr2[i];
        arr2[i] = tree2 + arr2[i];
        if((starting_point<=arr2[i])&&(arr2[i]<=end_point)){
            count2 += 1 ;
        }
        
    }
    cout<<count1<<endl;
    cout<<count2;
    
    return 0;
}


int main()
{
    int starting_point , end_point ;
    cin>>starting_point>>end_point;
    int tree1 , tree2 ;
    cin>>tree1>>tree2;
    int apples , oranges;
    cin>>apples>>oranges;
    count_apples_and_oranges(starting_point,end_point,tree1,tree2,apples,oranges);

    return 0;
}
