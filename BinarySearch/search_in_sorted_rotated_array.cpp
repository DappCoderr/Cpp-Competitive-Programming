#include<iostream>
using namespace std;
#include<vector>

int binarySearchSortedRotated(vector<int> &nums, int target){
    int low=0,high=nums.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]>=nums[low]){
            if(nums[low] <= target and target <= nums[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }else{
            if(nums[mid] <= target and target <= nums[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int target = 7;
    vector<int> nums = {4,5,6,7,0,1,2,3};
    cout<<"Output: "<<binarySearchSortedRotated(nums, target)<<endl;
}