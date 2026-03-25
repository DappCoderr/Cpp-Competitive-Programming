#include<iostream>
#include<vector>
using namespace std;

vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    stack<int> st;
    vector<int> result(n,-1);

    for(int i=0; i<2*n; i++){
        int num = nums[i%n];
        while(!st.empty() and nums[st.top()] < num){
            result[st.top()] = num;
            st.pop();
        }

        if(i<n){
            st.push(i);
        }
    }
    return result;
}

int main(){
    vector<int> nums = {1,2,1};
    nextGreaterElements(nums);
}