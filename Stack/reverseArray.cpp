#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};
    stack<int> st;

    for(auto x: v) st.push(x);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}