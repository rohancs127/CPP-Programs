//C++ program to demonstrate the working of priority queue

#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue <string> PQueue;
    PQueue.push("Object1");
    PQueue.push("Object2");
    PQueue.push("Object3");
    for(int i=0; i<3; i++)
    {
        string k;
        cin>>k;
        PQueue.push(k);
    }
    cout<<endl;
    while(!PQueue.empty())
    {
        cout<<PQueue.top()<<endl;
        PQueue.pop();
    }
}