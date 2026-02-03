#include<iostream>
using namespace std;

int binarySearch(vector<int> &input, int target){
    int low = 0;
    int high = input.size() - 1;
    while(low<=high){
        int mid = (low + high) / 2;
        if(input[mid] == target) return mid;
        else if(input[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
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
    cout<<binarySearch(input, tagret)<<endl;
    return 0;
}