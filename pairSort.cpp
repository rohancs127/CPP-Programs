//C++ program to sort a vector pair using user defined function

#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int>a, pair<int, int>b){
    if(a.first == b.first)
    return a.second<b.second;

    return a.first<b.first;
}

int main(){
    int n;
    cout<<"Enter n value"<<endl;
    cin>>n;

    vector<pair<int, int>> a(n);

    cout<<"Enter the pair"<<endl;
    for(int i=0; i<n; i++)
    cin>>a[i].first>>a[i].second;

    cout<<endl<<"After sorting"<<endl;

    sort(a.begin(), a.end(), cmp);
    for(int i= 0; i<n; i++)
    cout<<"["<<a[i].first<<", "<<a[i].second<<"]"<<endl;

}