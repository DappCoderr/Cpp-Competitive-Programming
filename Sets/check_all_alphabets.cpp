#include<iostream>
#include<set>
using namespace std;

bool checkAllAlphabets(string &s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    set<char> alphabets;
    for(auto ele: s){
        alphabets.insert(ele);
    }
    return (alphabets.size() == 26);
}

int main(){
    string s = "abcdeFGHiJKLMNOPQrstuvwxyz";
    bool result = checkAllAlphabets(s);
    cout<<"Output: "<<result<<" ";
}