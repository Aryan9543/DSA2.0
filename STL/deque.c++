#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(4);
    d.push_front(5);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<"size of the deque: "<<d.size()<<endl;
    cout<<endl<<"value at index: "<<d.at(1)<<endl;
    cout<<"front value: "<<d.front()<<endl;
    cout<<"last value: "<<d.back()<<endl;
    cout<<"empty or not: "<<d.empty()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase: ";
    for(int i:d)
    {
        cout<<i<<" ";
    }
}