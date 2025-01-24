#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int i =1;
    while(i <=n){
        int j = 1;
        int val = 0;
        while(j<=i){
            char ch = ('A' +i -1) + val;
            cout<<ch<<" ";
            j++;
            val++;
        }
        i++;
        cout<<endl;
    }
}