#include<iostream>
#include<stack>
using namespace std;

void copyStackUsingRecurssion(stack<int> &st){
    if(st.empty()) {
        return;
    }
    int curr = st.top();
    st.pop();
    copyStackUsingRecurssion(st);
    st.push(curr);
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    copyStackUsingRecurssion(st);
    while(not st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
    return 0;
}