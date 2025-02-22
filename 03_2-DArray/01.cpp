#include <iostream>
using namespace std;

int main(){
    // int arr[3][4];
    int arr[3][4] = {{2,22,222,2222},{3,33,333,3333},{4,44,444,4444}};

    // taking input row wise
    // for(int row=0;row<3;row++){
    //     for(int col=0;col<4;col++){
    //         cin>>arr[row][col];
    //     }
    // }


    // taking input column wise
    // for(int col=0;col<4;col++){
    //     for(int row=0;row<3;row++){
    //         cin>>arr[row][col];
    //     }
    // }

    //output
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}


