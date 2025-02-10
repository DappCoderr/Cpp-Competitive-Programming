#include<iostream>
using namespace std;
// #include <cmath>

// int squareOf(int p, int q){
//     if(q == 1) return p;
//     return squareOf(p,q-1) * p;
// }

// int main(){
//     cout<<squareOf(4,4);
//     return 0;
// }

// Taking down time complexity from O(q) to O(log)

int squareOf(int p, int q){
    if(q == 0) return 1;
    if(q%2 == 0){
        int result = squareOf(p,q/2);
        return result * result;
    }else{
        int result = squareOf(p,q-1/2);
        return 2 * result * result;
    }
}

int main(){
    cout<<squareOf(4,4);
    return 0;
}

