#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 1) return 1;
    int ans = n * factorial(n-1);
    return ans;
}

int main(){

    int n;

    cout<<"Enter value of n: "<<endl;
    cin>>n;

    cout<<n<<" Factorial value is: "<< factorial(n);
    
    return 0;
}