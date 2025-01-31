#include<iostream>
using namespace std;

int main(){
    // int array[] = {2,4};
    // int *ptr = &array[0];

    // cout<<"Array address: "<<array<<endl;
    // cout<<"Array zero index address: "<<ptr<<endl;

    int a[3] = {1,2,3};
    int (*ptr)[3] = &a;

    cout<<ptr<<" "<<a;

    return 0;
}