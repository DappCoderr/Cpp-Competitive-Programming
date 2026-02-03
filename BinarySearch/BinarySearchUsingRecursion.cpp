#include<iostream>
using namespace std;
#include <vector>

int binarySearch(vector<int> &input, int target, int low, int high){
    if(low > high) return -1;
    //int mid = (low + high) / 2; // this can overflow
    int mid = low + (high - low) / 2
    if(input[mid] == target) return mid;
    if(input[mid] < target){
        return binarySearch(input, target, mid+1, high);
    }else{
        return binarySearch(input, target, low, mid-1);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> input;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        input.push_back(x);
    }
    int tagret;
    cin>>tagret;
    cout<<binarySearch(input, tagret, 0 ,n-1)<<endl;
    return 0;
}