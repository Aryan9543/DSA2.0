#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i =n;
    while(i >=1){
        int j = 1;
        int val = 0;
        while(j<=i){
            char ch = ('A' +i -1) + val;
            cout<<ch<<" ";
            j++;
            val++;
        }
        i--;
        cout<<endl;
    }
}