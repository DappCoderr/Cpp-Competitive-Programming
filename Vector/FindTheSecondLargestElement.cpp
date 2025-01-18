#include<iostream>
using namespace std;

int findTheLargestElement(int array[], int size){
    int largestElement = array[0];
    for(int i=0; i<size; i++){
        if(largestElement < array[i]){
            largestElement = array[i];
        }
    }
    return largestElement;
}

int main(){
    int array[] = {4,5,3,2,1,8};
    int size = sizeof(array)/sizeof(array[0]);
    int largest = array[0], index;

    for(int i=0; i<size; i++){
        if(largest <= array[i]){
            largest = array[i];
            index = i;
        }
    }

    array[index] = 0;
    int large = findTheLargestElement(array, size);

    cout<<"Second Largest: "<< large;
    
}