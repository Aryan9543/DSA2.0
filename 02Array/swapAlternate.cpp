#include <iostream>
using namespace std;


void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1 < size){
            // swap(arr[i],arr[i+1]);

            // custom implementation of swap
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int odd[5] = {1,2,3,4,5};
    int even[8] = {1,2,3,4,5,6,7,8};

    swapAlternate(odd,5);
    printArray(odd,5);


    swapAlternate(even,8);
    printArray(even,8);
}