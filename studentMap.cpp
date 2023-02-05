//C++ program to store name and marks of 5 students and display their results lexologically
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int>m;
    string name;
    int marks;
    for(int i=0; i<5; i++){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
        m.insert(make_pair(name,marks));
        //OR m.insert({name, marks});
    }
    cout<<"Name"<<" \t"<<"Marks"<<endl;
    for(auto it= m.begin(); it!=m.end(); it++)
    cout<<(*it).first<<" \t"<<(*it).second<<endl;
    cout<<endl;

    auto it= m.find("Gaurav");
    if (it!=m.end());
    m.erase(it);
    cout<<"After Updating"<<endl;
    cout<<"Name"<<" \t"<<"Marks"<<endl;
    for(auto it= m.begin(); it!=m.end(); it++)
    cout<<(*it).first<<" \t"<<(*it).second<<endl;
    return 0;
}