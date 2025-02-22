#include <iostream>
using namespace std;

int main(){
    int ans1 = 0;
    int arr[5] = {1,2,3,4,4};
    for(int i = 0;i<5;i++){
       ans1 += arr[i];
    }
    int ans2 = 0;
    for(int i =1; i<5;i++){
        ans2 += i;
    }

    cout<< ans1 - ans2;

}