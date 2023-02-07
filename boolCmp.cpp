//C++ program to sort using user defined functions

#include<bits/stdc++.h>
using namespace std;
bool ascendCmp(int a, int b){
    return(a<b);
}

bool descendCmp(int a, int b){
    return(a>b);
}

int main(){
    int n;
    cout<<"Enter n value:";
    cin>>n;
    cout<<endl;

    int a[n];
    cout<<"Enter the array elements"<<endl;

    for(int i=0; i<n; i++)
    cin>>a[i];

    sort(a, a+n, ascendCmp);
    cout<<"Sorted in ascending order"<<endl;
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;

    sort(a, a+n,descendCmp);
    cout<<"Sorted in descending order"<<endl;
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
