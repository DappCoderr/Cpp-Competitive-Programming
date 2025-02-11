#include<iostream>
using namespace std;

// Approach - 1 
void max1(int arr[], int idx, int num, int *m){
    if(idx < num){
        if(arr[idx] > *m) {
            *m = arr[idx];
        };
        max1(arr, idx + 1, num, m);
    }
}

// Approach - 2 
int max2(int *arr, int idx, int n){
    if(idx == n - 1) {
        return arr[idx];
    }
    return max(arr[idx], max2(arr, idx+1, n));
}

int main(){
    int array[] = {1,0,3,465,43,21};
    int size = 6;
    int max = array[0];
    max1(array, 1, size, &max);
    cout<<"Approach 1: "<<max<<endl;
    cout<<"Approach 2: "<<max2(array, 1, size);
    return 0;
}