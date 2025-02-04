#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n-1);
}

int main(){

    int n;

    cout<<"Enter value of n: "<<endl;
    cin>>n;

    cout<<n<<" Factorial value is: "<< factorial(n);
    
    return 0;
}