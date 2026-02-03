#include<iostream>
using namespace std;
#include<vector>

int lowerBound(vector<int>&input, int target){
    int low = 0, high = input.size()-1, ans=-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(input[mid]>=target){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}
int upperBound(vector<int>&input, int target){
    int low = 0, high = input.size()-1, ans=-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(input[mid] > target){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return ans;
}

int main(){
    int n = 10;
    vector<int> input = {2,3,3,3,3,3,4,5,7,10};
    int target = 11;
    int lb = lowerBound(input, target); 
    vector<int> result;
    if(input[lb]!=target){
        result.push_back(-1);
        result.push_back(-1);
    }else{
        int ub = upperBound(input, target);
        result.push_back(lb);
        result.push_back(ub-1);
    }
    cout<<result[0]<<" "<<result[1]<<endl;
    return 0;
}