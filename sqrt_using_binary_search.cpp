#include<iostream>
using namespace std;

int sqrt(int x){
    int low=1, high=x, ans=-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if((long long)mid*mid <= x){
            ans=mid;
            low=mid+1;
        }else{
            high = mid-1;
        }
    }
    return ans;
}

int main(){
    cout<<sqrt(40)<<endl;
    return 0;
}