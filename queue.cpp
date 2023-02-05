#include<bits/stdc++.h>
using namespace std;
int main(){
    queue <string> Queue;
    Queue.push("Object1");
    Queue.push("Object2");
    Queue.push("Object3");
    for(int i=0; i<3; i++)
    {
        string k;
        cin>>k;
        Queue.push(k);
    }
    cout<<endl;
    while(!Queue.empty())
    {
        cout<<Queue.front()<<endl;
        Queue.pop();
    }
}