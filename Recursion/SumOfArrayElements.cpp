#include<iostream>
using namespace std;

int sumOfElements(int array[], int idx, int n) {
    if(idx == n-1){
        return array[idx];
    } 

    if(idx < n){
        return array[idx] + sumOfElements(array, idx + 1, n);
    }

    return 0;
}

int main(){
    int array[] = {2,3,4,5,1,10};
    int size = 6;
    cout<<"Sum of all elements of an array: "<< sumOfElements(array, 6, size);
    return 0;
}