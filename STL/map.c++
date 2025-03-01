#include <iostream>
#include <map>

using namespace std;

int main(){
    map<int,string> m;

    m[1] = "aryan";
    m[5] = "gupta";
    m[2] = "kumar";
    m.insert({10 , "hey"});

    cout<<"accessing value using key: " <<m[1]<<endl;
    m.erase(2);
    m.clear();
    
    for(auto i:m){
        cout<<i.first <<" " <<i.second<<endl;
    }
}