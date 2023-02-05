//C++ program to swap 2 pairs
#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<string,string> p[4];
    p[0]={"S1","Math"};
    p[1]={"S2","DLDCO"};
    p[2]={"S3","OOP"};
    p[3]={"S4","DS"};
    swap(p[1],p[3]);
    for(int i=0;i<4;i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}