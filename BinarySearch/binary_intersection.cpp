#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
            return true;
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
        }
    return false;
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;

    sort(nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());

    for (int i = 0; i < nums1.size(); i++) {
        if (i > 0 && nums1[i] == nums1[i - 1])
            continue;
        if (binarySearch(nums2, nums1[i])) {
            ans.push_back(nums1[i]);
        }
    }
    return ans;
}

int main(){
    vector<int> nums1 = {1,2,4,9,24,4,4,9,1};
    vector<int> nums2 = {4,5,2,9};
    cout<<"The output is: ";
    for (int num : intersection(nums1, nums2)) {
        cout << num << " "<<endl;
    }
    return 0;
}