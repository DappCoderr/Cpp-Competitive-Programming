#include<iostream>
#include<vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
    vector<int>result;
    for(int i=0;i<n;i++){
        result.push_back(nums[i]);
        result.push_back(nums[n+i]);
    }
    return result;
}

int main(){Pr
    vector<int> nums = {1,2,3,4,5,6};
    int n = 3;
    shuffle(nums, n);
    return 0;
}