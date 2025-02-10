#include<iostream>
using namespace std;

void maxValue(int arr[], int idx, int num, int *m){
    if(idx < num){
        if(arr[idx] > *m) {
            *m = arr[idx];
        };
        maxValue(arr, idx + 1, num, m);
    }
}

int main(){
    int array[] = {1,0,3,465,43,21};
    int size = 6;
    int max = array[0];
    // maxValue(array, 0, size, max);
    maxValue(array, 1, size, &max);
    cout<<max;
    return 0;
}