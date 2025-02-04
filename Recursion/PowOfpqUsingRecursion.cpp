#include<iostream>
using namespace std;
#include <cmath>

int squareOf(int p, int q){
    if(q == 1) return p;
    return squareOf(p,q-1) * p;
}

int main(){
    cout<<squareOf(4,4);
    return 0;
}