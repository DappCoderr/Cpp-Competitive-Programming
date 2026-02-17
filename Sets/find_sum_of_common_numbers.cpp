#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    vector<int> v1 = {1,1,1,2,3,5,4,5,6};
    vector<int> v2 = {4,6};
    set<int> s1;
    int ans = 0;
    for(auto ele: v1){
        s1.insert(ele);
    }
    for(auto ele: v2){
        if(s1.count(ele)){
            ans += ele;
        }
    }
    cout<<"Output: "<<ans<<endl;
    return 0;
}