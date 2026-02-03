#include<iostream>
using namespace std;

int findMinimumInSortedArray(vector<int> &input){
    int low=0, high=input.size()-1;
    if(input.size()==1) return low;
    if(input[low] < input[high]) return low;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(input[mid]>input[mid+1]) return mid+1;
        if(input[mid]<input[mid-1]) return mid;
        if(input[mid] < input[low]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){
    vector<int> input = {4,5,6,1,2,3};
    int minValue = findMinimumInSortedArray(input);
    cout<<"The min value is: "<<minValue<<endl;
    return 0;
}