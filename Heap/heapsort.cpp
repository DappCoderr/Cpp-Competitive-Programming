#include<iostream>
#include<vector>
using namespace std;

void printHeap(vector<int> &v){
    for(auto ele: v){
        cout<<ele<<", ";
    }
}

void heapify(vector<int> &v, int idx, int size){
    if(size == 0) return;
    int largest = idx, left = 2*idx+1, right = 2*idx+2;
    if(size>left and v[left]>v[largest]) largest = left;
    if(size>right and v[right]>v[largest]) largest = right;

    if(largest != idx){
        swap(v[largest], v[idx]);
        heapify(v, largest, size);
    }
}

void sortArray(vector<int>&v, int size){
    for(int i = size-1; i>0; i--){
        swap(v[i], v[0]);
        heapify(v, 0, i);
    }
}

int main(){
    vector<int> v = {10,3,8,9,5,13,18,14,11,70};
    int n = v.size();
    for(int i = (n/2 - 1); i >= 0; i--){
        heapify(v, i, n);
    }
    sortArray(v,n);
    cout<<"Printing the max heap"<<endl;
    printHeap(v);
    return 0;
}