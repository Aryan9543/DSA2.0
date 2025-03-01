#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<string> q;
    q.push("aryan");
    q.push("gupta");
    q.push("kapoori");
    

    cout<<"front elem: "<<q.front()<<endl;
    cout<<"back elem: "<<q.back()<<endl;

    q.pop();
    cout<<"after poping element"<<endl;
    cout<<"front elem: "<<q.front()<<endl;
    cout<<"back elem: "<<q.back()<<endl;


}