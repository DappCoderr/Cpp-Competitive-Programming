#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {4,2,-2,-2,1};
    stack<int> st;

    for(auto x: v){
        if(x > 0){
            st.push(x);
        }else{
            st.pop();
        }
    }

    vector<int> ans;

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    for(auto x: ans){
        cout<<x<<" ";
    }

    return 0;
}