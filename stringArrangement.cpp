//C++ program to arrange strings

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string, int> m;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
    }

    for(auto it= m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<" "<<(*it).second<<endl;
    }
}