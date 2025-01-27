#include<iostream>
using namespace std;

// void swapValue(int &a, int &b){
//     int *ptr_a = &a;
//     int *ptr_b = &b;
//     int sum = *ptr_a + *ptr_b;
//     a = sum - *ptr_a;
//     b = sum - *ptr_b;
// }

// int main(){
//     int a = 23, b=84;
//     swapValue(a, b);
//     cout<<"Value of a: "<<a<<endl;
//     cout<<"Value of b: "<<b<<endl;
//     return 0;
// }

void swapValue(int *a, int *b){
    int sum = *a + *b;
    *a = sum - *a;
    *b = sum - *b;
}

int main(){
    int a = 23, b=84;
    swapValue(&a, &b);
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    return 0;
}