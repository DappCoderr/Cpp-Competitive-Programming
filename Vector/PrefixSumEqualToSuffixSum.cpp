#include<iostream>
using namespace std;

void getPrefixSum(int array[], int size, int prefixArray[]){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += array[i];
        prefixArray[i] = sum;
    }
}

void getSuffixSum(int array[], int size, int suffixArray[]){
    int sum = 0;
    for(int i=size-1; i>=0; i--){
        sum += array[i];
        suffixArray[i] = sum;
    }
}

int main(){
    int array[] = {2,3,1,2,6,2};
    int size = sizeof(array)/sizeof(array[0]);
    int prefixArray[5];
    int suffixArray[5]; 

    getPrefixSum(array, size, prefixArray);
    getSuffixSum(array, size, suffixArray);

    cout<<"Get Prefix Sum Array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<prefixArray[i]<<" ";
    }

    cout<<endl;

    cout<<"Get Suffix Sum Array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<suffixArray[i]<<" ";
    }

    cout<<endl;

    for(int i=0; i<size;i++){
        if(i == 0 || i == size - 1){
            continue;
        }
        for(int j=0; j<size; j++){
            if(j == 0 || j == size - 1){
                continue;
            }
            if(prefixArray[i] == suffixArray[j] && i < j){
                cout<<prefixArray[i]<<endl;
                cout<<"Yes";
            }
        }
    }
}
