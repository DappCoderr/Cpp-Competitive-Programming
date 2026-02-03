#include<iostream>
#include<vector>
using namespace std;

int peakInMountainArray(vector<int> &nums){
    int low = 0, high = nums.size()-1, ans=-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid] > nums[mid-1]){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,0};
    cout<<"Output: "<<peakInMountainArray(nums)<<endl;
    return 0;
}