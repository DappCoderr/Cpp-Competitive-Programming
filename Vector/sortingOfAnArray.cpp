// Sorting an array consisting of only 0's and 1's

#include<iostream>
using namespace std;

void sortArray(int array[], int size){
    int i=0;int j=size-1;
    while(i < j){
        if(array[i] == 1 && array[j] == 0){
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
        if(array[i] == 0){
            i++;
        }if(array[j] == 1){
            j--;
        }
    }
}

int main(){
    int array[] = {1,1,0,1,1,0,0,1,0,0,0,1,1,0};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<size<<endl;
    sortArray(array, size);
    for(int i=0; i<size; i++){
        cout<<array[i];
    }
}