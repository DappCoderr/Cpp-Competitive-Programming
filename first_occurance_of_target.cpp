#include<iostream>
using namespace std;
#include<vector>

int firstOccurance(vector<int> &input, int target){
    int low=0;
    int high = input.size() - 1;
    int ans = -1;
    while(low <= high){
        int mid= low + (high - low) / 2;
        if(input[mid]==target){
            ans=mid;
            high=mid-1;
        }else if(input[mid]<target){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}

int main(){
    int n = 10;
    vector<int> input = {2, 2, 3, 4, 4, 4, 5, 5, 6, 7};
    int target = 4;
    cout<<firstOccurance(input, target)<<endl;
    return 0;
}