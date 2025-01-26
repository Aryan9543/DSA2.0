//print sum of all elements in an array

#include <iostream>
using namespace std;

int getSum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }

    return sum;

}

int main(){
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int arr[100];

    cout<<"enter the values for calculating the sum: ";

    for(int i =0 ;i<size;i++){
        cin>>arr[i];
    }

    cout<<"the sum of all the elements in an array: "<<getSum(arr , size);

}