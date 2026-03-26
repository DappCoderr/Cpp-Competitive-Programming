#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n); 
    int j=0;
    while(j<n){
        int product = 1;
        for(int i=0; i<n; i++){
            if(i!=j){
                product *= nums[i];
            }
        }
        ans[j] = product;
        j++;
    }
    return ans;
}

int main(){
    vector<int>nums = {-1,1,0,-3,3};
    vector<int> ans = productExceptSelf(nums);
    for(auto ele: ans){
        cout<<"Output"<<ele<<endl;
    }
}