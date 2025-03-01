#include <iostream>
#include <list>

using namespace std;

int main(){
    list <int> l;

    l.push_back(5);
    l.push_front(4);
    l.push_front(2);
    l.push_front(8);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    // l.pop_back();
    l.pop_front();
    // auto it = l.begin();
    // advance(it,2);
    // l.erase(it);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<l.empty();

    
}