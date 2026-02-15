#include<iostream>
#include<set>
using namespace std;

int main(){
    set<string> inviteList;
    int size;
    cout<<"Enter list size"<<endl;
    cin>>size;

    cout<<"Enter Names"<<endl;
    while(size--){
        string names;
        cin>>names;
        inviteList.insert(names);
    }
    cout<<"Output Names: "<<endl;
    for(auto it: inviteList){
        cout<<it<<" ";
    }
    return 0;
}