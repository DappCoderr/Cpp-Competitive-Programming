#include<iostream>
#include<vector>
using namespace std;

void printHeap(vector<int> &v){
    for(auto ele: v){
        cout<<ele<<", ";
    }
}

void heapify(vector<int> &v, int size, int idx){
    if(size == 0) return;
    int largest = idx, left = 2*idx+1, right = 2*idx+2;
    if(size>left and v[left]>v[largest]) largest = left;
    if(size>right and v[right]>v[largest]) largest = right;

    if(largest != idx){
        swap(v[largest], v[idx]);
        heapify(v, size, largest);
    }
}

int main(){
    vector<int> v = {10,3,8,9,5,13,18,14,11,70};
    int n = v.size();
    for(int i = (n/2 - 1); i >= 0; i--){
        heapify(v, n, i);
    }
    cout<<"Printing the max heap"<<endl;
    printHeap(v);
    return 0;
}