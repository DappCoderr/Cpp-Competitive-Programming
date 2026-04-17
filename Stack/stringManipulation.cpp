#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<string> v = {"ab", "ac", "da", "da", "ac", "db", "ea"};
    stack<string> st;

    for(auto x: v){
        if(!st.empty() and st.top()==x){
            st.pop();
        }else{
            st.push(x);
        }
    }

    vector<string> ans;

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