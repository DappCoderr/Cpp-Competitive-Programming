#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    string s = "((())())";
    stack<char> st;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        }else if(s.empty()){
            return 0;
        }else{
            st.pop();
        }
    }

    if(st.empty()){
        cout<<true<<endl;
    }else{
        cout<<false<<endl;
    }

    return 0;
}