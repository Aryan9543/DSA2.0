#include <iostream>
#include <queue>

using namespace std;
int main(){
    // by defalut priority_queue set to the max heap 

    priority_queue<int> prQ;

    prQ.push(10);
    prQ.push(30);
    prQ.push(40);
    prQ.push(60);
    prQ.push(45);

    cout<<"check for empty queue: "<<prQ.empty()<<endl;

    cout<<"top element: "<<prQ.top()<<endl;

    prQ.pop();
    cout<<"top element after poping element: "<<prQ.top()<<endl;
    cout<<"size of the queue: "<<prQ.size()<<endl;
    cout<<"print whole queue: ";
    int n = prQ.size();
    for(int i=0;i<n;i++){
        cout<<prQ.top()<<" ";
        prQ.pop();
    }
    cout<<endl;

    // for min heap we to declare it with a different way

    priority_queue<int ,vector<int> ,greater<int>> mini;

    mini.push(10);
    mini.push(30);
    mini.push(40);
    mini.push(60);
    mini.push(45);

    cout<<"top element: "<<mini.top()<<endl;

    mini.pop();
    cout<<"top element after poping element: "<<mini.top()<<endl;
    cout<<"print whole queue mini: ";
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
}