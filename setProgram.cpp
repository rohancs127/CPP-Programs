//C++ Program to demonstrate set concepts

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    s.insert("Rohan");
    s.insert("Deveesh");
    s.insert("Srujan");
    s.insert("Ninad");
    s.insert("Babith");
    s.insert("Adithya");
    s.insert("Thrisha");

    s.erase("Adithya");

    for(auto it= s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<endl;
    }

    //or
        /*for(auto v: s)
    cout<<v<<endl;*/
}
