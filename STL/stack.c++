#include <iostream>
#include <stack>

using namespace std;
int main(){
    stack<int> s;
    s.push(5);
    s.push(3);
    s.push(9);
    s.push(2);
    s.push(6);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    s.pop();
    cout<<"after pop checking the top element: "<<s.top();
}