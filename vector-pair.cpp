//C++ program to demonstrate the concepts of vector pair

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> vectorPair= {{1,2},{2,3},{3,4},{4,5},{5,6}};
    vector<pair<int,int>>::iterator it;
    for(it= vectorPair.begin(); it!=vectorPair.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
        //Can use (it->first) & (it->second) instead of (*it).first & (*it.)second respectively.
    }
    return 0;
}

