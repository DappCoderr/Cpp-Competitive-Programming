#include<iostream>
using namespace std;

// Normal Method
int fibonacci(int n){
    int sum = 0;
    int a = 0, b = 1;
    for(int i=2; i<=n; i++){
        sum  = a+b;
        a = b;
        b = sum;
    }
    return sum;
}

//Using Recursion
int fibonacci(int n){
    if(n == 0 || n == 1) return n;
    return fibonacci(n-2) + fibonacci(n-1);
}

int main(){

    cout<<"Fibonacci sum of n numbers: "<<fibonacci(8);

    return 0;
}