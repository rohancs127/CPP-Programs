//C++ Program to insert elements on stack and display

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string> s;
    s.push("rohan");
    s.push("deveesh");
    s.push("thrisha");
    s.push("babith");
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}