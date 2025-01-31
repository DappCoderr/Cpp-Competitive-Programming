#include<iostream>
using namespace std;

int main(){
    int array[] = {1,2,3,4,5};
    int size = 5;
    int *ptr = array + size - 1;
    cout<<"Traverse the array in reverse using Pointer"<<endl;
    for(int i = size-1; i>=0; i--){
        cout<<*(array + i);
    }
    return 0;
}