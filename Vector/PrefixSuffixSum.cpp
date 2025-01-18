#include<iostream>
using namespace std;

int sumOfAllRightElements(int array[], int l, int size){
    int sum=0;
    for(int i=l+1; i<size; i++){
        sum = array[i] + sum;
    }
    return sum;
}

int sumOfAllLeftElements(int array[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum = array[i] + sum;
    }
    return sum;
}

int main(){
    int array[] = {2,3,3,2,4,2};
    int leftSum=0, rightSum=0;
    int size = sizeof(array)/sizeof(array[0]);

    for(int i=0;i<size; i++){
            leftSum = sumOfAllLeftElements(array, i+1);
            rightSum = sumOfAllRightElements(array, i, size);

            if(leftSum == rightSum){
                cout<<i;
                break;
            }
    }
}