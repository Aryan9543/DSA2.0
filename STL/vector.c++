#include <iostream>
#include <vector>
using namespace std;
int main(){

    //inserting element during the declaration of vector
    vector<int> v = {1,2,3,4,5};
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;


    vector<int> a;
    a.push_back(1);
    cout<<"capacity: "<<a.capacity()<<endl;
    cout<<"size: "<<a.size()<<endl;
    a.push_back(2);
    cout<<"capacity: "<<a.capacity()<<endl;
    cout<<"size: "<<a.size()<<endl;
    a.push_back(3);
    cout<<"capacity: "<<a.capacity()<<endl;
    cout<<"size: "<<a.size()<<endl;
    cout<<"element at the second: "<<a.at(2)<<endl;
    cout<<"front element: "<<a.front()<<endl;
    cout<<"last element: "<<a.back()<<endl;

    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    a.pop_back();

    for(int i:a){
        cout<<i<<" ";
    }


}