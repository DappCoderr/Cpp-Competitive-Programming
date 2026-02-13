#include<iostream>
#include<stack>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    stack<int> res;
    while(not input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    while(not temp.empty()){
        int curr = temp.top();
        temp.pop();
        res.push(curr);
    }
    return res;
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    stack<int> res = copyStack(st);
    while(not res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<endl;
    }
    return 0;
}