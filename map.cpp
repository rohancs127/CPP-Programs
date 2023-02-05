//C++ program to declare a map.

#include<bits/stdc++.h>
using namespace std;
int main(){
    map <int,string>m;
    m[127]= "Rohan";    //first way of declaring map
    m[146]= "Deveesh";
    m[47]= "Srujan";
    m.insert(make_pair(7,"Adithya"));     //second way of declaring map
    for(auto it= m.begin(); it!= m.end(); it++)
    {
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    return 0;
}