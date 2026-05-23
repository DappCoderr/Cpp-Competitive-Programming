#include<iostream>
#include<vector>
using namespace std;

class MaxHeap{
    public:
        int *arr;
        int size, totalSize;

        MaxHeap(int n){
            arr = new int[n];
            size = 0;
            totalSize = n;
        }

    void insertElement(int value){
        if(size == totalSize) {
            cout<<"Overflow"<<endl;
            return;
        }
        arr[size] = value;
        int idx = size;
        size++;

        while(idx>0 and arr[(idx-1)/2] < arr[idx]){
            swap(arr[idx], arr[(idx-1)/2]);
            idx = (idx-1)/2;
        }
        cout<<"An new element is inserted in MaxHeap"<<arr[idx]<<endl;
    }

    void printHeap(){
        for(int i=0;  i<size; i++){
            cout<<arr[i]<<endl;
        }
    }

    void Heapify(int idx){
        int largest = idx;
        int left = 2*idx+1;
        int right = 2*idx+2;

        if(left<size and arr[largest] < arr[left]) largest = left;
        if(right<size and arr[largest] < arr[right]) largest = right;

        if(largest != idx){
            swap(arr[idx], arr[largest]);
            Heapify(largest);
        }
    }    

    void deleteElement(){
        if(size == 0){
            cout<<"Underflow"<<endl;
            return;
        }
        arr[0] = arr[size-1];
        size--;
        cout<<"Root node is deleted"<<endl;
        Heapify(0);
    }
};

int main(){
    MaxHeap hp = MaxHeap(6);
    hp.insertElement(12);
    hp.insertElement(4);
    hp.insertElement(5);
    hp.printHeap();
    hp.insertElement(32);
    hp.insertElement(56);
    hp.printHeap();
    hp.insertElement(43);
    hp.printHeap();
    hp.insertElement(111);
    hp.insertElement(9);
    hp.printHeap();
    hp.deleteElement();
    hp.printHeap();
    return 0;
}