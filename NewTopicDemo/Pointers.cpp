#include<iostream>
using namespace std;

int main(){
    int x = 7;
    float y = 7.3;

    int *ptr = &x;
    cout<<"Address value store in pointer ptr: "<<ptr<<"\n";
    cout<<"Value store at address, which is store in pointer ptr:"<< *ptr<<endl;

    float *ptr2 = &y;
    cout<<"Address value store in pointer ptr: "<<ptr2<<"\n";
    cout<<"Value store at address, which is store in pointer ptr:"<< *ptr2<<endl;

    return 0;
}