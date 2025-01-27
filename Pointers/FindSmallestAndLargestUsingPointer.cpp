#include<iostream>
using namespace std;

int findTheLargestNumber(int &a, int &b, int &c){
    int *largestNum = &a;
    if(b > *largestNum){
        largestNum = &b;
    }
    if(c > *largestNum){
        largestNum = &c;
    }
    return *largestNum;
}

int findTheSmallestNumber(int &a, int &b, int &c){
    int *smallestNum = &a;
    if(b < *smallestNum){
        smallestNum = &b;
    }
    if(c < *smallestNum){
        smallestNum = &c;
    }
    return *smallestNum;
}

int main(){
    int a=26,b=15,c=33;
    cout<<"Largest number is: "<< &a<<endl;
    cout<<"Largest number is: "<< findTheLargestNumber(a,b,c)<<endl;
    cout<<"Smallest number is: "<< findTheSmallestNumber(a,b,c);
}