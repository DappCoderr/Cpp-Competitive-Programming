#include<iostream>
using namespace std;

void findFirstAndLastIndex(string s, char a, int *ptr1, int *ptr2){
    for(int i=0; i<s.size(); i++){
        if(s[i] == a){
            *ptr1 = i;
            break; 
        }
    }

    for(int i=s.size()-1; i>0; i--){
        if(s[i] == a){
            *ptr2 = i;
            break; 
        }
    }
}

int main(){
    string s = "casaabdgdfassd";
    char c = 's';
    int firstIndex = -1;
    int lastIndex = -1;

    findFirstAndLastIndex(s, c, &firstIndex, &lastIndex);
    cout<<"First Index: "<<firstIndex<<endl;
    cout<<"Last Index: "<<lastIndex<<endl;
    return 0;
}