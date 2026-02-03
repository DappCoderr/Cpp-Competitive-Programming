#include<iostream>
#include<vector>
using namespace std;

int findPeak(vector<int> &nums){
    int n = nums.size();
    int low=0, high=n-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(mid==0){
            if(nums[mid] > nums[mid+1]){
                return 0;
            }else{
                return 1;
            }
        }else if(mid == n-1){
            if(nums[mid] > nums[mid-1]){
                return n-1;
            }else{
                return n-2;
            }
        }else{
            if(nums[mid]>nums[mid+1] and nums[mid]>nums[mid-1]){
                return mid;
            }else if(nums[mid] > nums[mid-1]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {2,2,1,2,5};
    cout<<"Output: "<<findPeak(nums)<<endl;
    return 0;
}
