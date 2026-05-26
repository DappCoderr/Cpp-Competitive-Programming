#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;

int fibonacci(int n){
    if(n == 0 or n == 1) return n;
    if(dp[n] != -1) return dp[n];
    return dp[n] = fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int n;
    cin>>n;
    dp.resize(n+1, -1);
    cout<<"Fibonacci of value "<<n<<" is: "<<fibonacci(n)<<endl;
    return 0;
}