#include<iostream>
#include<array>
using namespace std;

int main(){
    //basic array
    int arr[5] = {1,2,3,4,5};
    // cout<<arr.size(); //we cant perform these operations on basic array

    // stl wala array
    array<int,4> a = {1,2,3,4};

    
    cout<<a.size()<<endl;
    cout<<"element at second index "<<a.at(2)<<endl;
    cout<<"empty or not: "<<a.empty()<<endl;
    cout<<"first element: "<<a.front()<<endl;
    cout<<"last element: "<<a.back()<<endl;
}