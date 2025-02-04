#include<iostream>
using namespace std;

int sumOfIntegerDigit(int n){
    if(n <= 9 and n>=0) return n;
    return sumOfIntegerDigit(n/10) + (n%10);
}

int main(){
    int n;
    cout<<"Enter the digit:"<<endl;
    cin>>n;

    cout<<sumOfIntegerDigit(n);

    return 0;
}