#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int i=1;
    while(i<=n){

        // first triangle
        int j = n-i + 1;
        int count=1;
        while(j){
            cout<<count;
            count++;
            j--;
        }

        //star pattern
        int l = 1;
        if(i>1){
            while(l<=(i * 2 - 2)){
                cout<<"*";
                l++;
            }
        }


        //third triangle

        int k = n-i + 1;
        while(k){
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }

    
}