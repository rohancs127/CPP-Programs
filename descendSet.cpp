/* C++ Program to sort n integers in descending order*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n value";
    cin>>n;

    set<int, greater<int>> s;

    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        s.insert(m);
    }

    for(auto it= s.begin(); it !=s.end(); it++)
    cout<<*it<<endl;
}