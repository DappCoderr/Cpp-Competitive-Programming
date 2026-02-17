#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {2,3,4,0};
    set<int> s;
    for(auto ele:v){
        s.insert(ele);
    }

    auto itr = s.begin();
    itr++;
    cout<<"Second smallest: "<<*itr<<endl;
}
