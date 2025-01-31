#include<iostream>
using namespace std;

int main(){
    int array[] = {1,2,3,4,5};
    int size = 5;
    int *ptr = array + size - 1;
    cout<<"Traverse the array in reverse using Pointer"<<endl;
    // Using For Loop (Method 1)
    for(int i = size-1; i>=0; i--){
        cout<<*(array + i)<< " ";
    }

    cout<<endl;

    //Using While Loop (Method 2)
    while(1){
        cout<<*ptr<<" ";
        if(ptr == array){
            break;
        }
        ptr--;
    }
    return 0;
}