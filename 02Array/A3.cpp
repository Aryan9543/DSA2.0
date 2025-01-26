#include <iostream>
using namespace std;

void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }


}

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    int arr[5] = {5,4,3,2,1};
    int brr[5] = {10,9,8,7,6};

    reverse(arr,5);
    reverse(brr,5);

    printArray(arr,5);
    printArray(brr,5);

}