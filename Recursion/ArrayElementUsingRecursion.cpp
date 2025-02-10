#include<iostream>
using namespace std;

void printArrayElements(int arr[], int idx, int num){
    if(idx < num){
        cout<<arr[idx]<<" ";
        printArrayElements(arr, idx + 1, num);
    }
}

int main(){
    int array[] = {1,2,3,465,43,21};
    int size = 6;
    printArrayElements(array, 0, size);
}
