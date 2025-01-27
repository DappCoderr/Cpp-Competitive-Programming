#include<iostream>
using namespace std;

int main(){
    int x = 7;
    float y = 7.3;
    int z = 9;

    int *ptrZ = &z;

    int *ptr = &x;
    cout<<"Address value store in pointer ptr: "<<ptr<<"\n";
    cout<<"Value store at address, which is store in pointer ptr:"<< *ptr<<endl;

    float *ptr2 = &y;
    cout<<"Address value store in pointer ptr: "<<ptr2<<"\n";
    cout<<"Value store at address, which is store in pointer ptr:"<< *ptr2<<endl;

    *ptr2 = 9.3;
    cout<<"New value of y = "<<y<<endl;

    cout<<"Address of x - "<< &x<<endl;
    cout<<"value store in ptr - "<< ptr<<endl;
    cout<<"Address of ptr - "<<&ptr<<endl;
    ptr = ptrZ;
    cout<<"value store in ptr - "<< ptr<<endl;
    cout<<*ptr<<endl;

    return 0;
}