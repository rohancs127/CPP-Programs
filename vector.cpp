//C++ program to demonstrate vector concepts

#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v= {2,5,15,10};
    vector<int>::iterator it;
    for(it= v.begin(); it!=v.end(); it++)
    cout<<(*it)<<"\t";
    return 0;
}
