#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int i =1;
    while(i<= n){
        int space = n-i;
        while(space){
            cout<<" ";
            space--;
        }


        int j = 1;
        while(j<=i){
            cout<<j;
            j++;
        }

        int k = i-1;
        while(k){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;

    }
}