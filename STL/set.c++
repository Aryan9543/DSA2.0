#include <iostream>
#include <set>

using namespace std;
int main(){
    set<int> e;

    e.insert(3);
    e.insert(3);
    e.insert(0);
    e.insert(1);
    e.insert(2);
    e.insert(2);
    
    e.erase(2);

    for(auto i:e){
        cout<<i<<" ";
    }
    cout<<endl;

    auto it = e.find(3);
    if (it != e.end())
    std::cout << "Found: " << *it <<endl;
    else
    std::cout << "Not found"<<endl;

    // cout<<e.find(3)<<endl;
    cout<<e.size()<<endl;
}