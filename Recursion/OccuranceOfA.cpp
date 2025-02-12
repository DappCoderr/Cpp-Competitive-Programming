#include<iostream>
using namespace std;

void f(string *s, int idx){
    //Using arrow operator (->)
    if (idx < s->size()) {  // Fix base condition
        if (s->at(idx) == 'a') {
            s->erase(idx, 1); // Remove 'a' at idx
            f(s, idx); // Don't increment idx; recheck the same position
        } else {
            f(s, idx + 1); // Move to the next character
        }
    } 

    // Dereference s explicitly
    if (idx < (*s).size()) {
        if ((*s).at(idx) == 's') {  // Equivalent to s->at(idx)
            (*s).erase(idx,1);  // Equivalent to s->erase(idx,1)
            f(s, idx);
        } else {
            f(s, idx+1);
        }
    }       
}

int main(){
    string str = "sisussa";
    f(&str, 0);
    cout<<"String: "<<str;
    return 0;
}