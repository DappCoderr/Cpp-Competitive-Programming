#include <iostream>
using namespace std;
void sum( int *arr , int size){
    int sum=0;
    for(int i= 0; i<size; i++){
        sum += *(arr + i);
    }
    cout<<sum;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    sum( arr, size);
    return 0;
}