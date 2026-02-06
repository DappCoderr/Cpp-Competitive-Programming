#include<iostream>
#include<string>
using namespace std;

// int main(){
//     string str = "star";
//     sort(str.begin(), str.end());
//     cout<<str<<endl;
// }

string stringSorting(string &str){
    vector<int> freq(26,0);

    for(int i=0; i<str.size(); i++){
        int index = str[i] - 'a';
        freq[index]+=1;
    }

    int j=0;
    for(int i=0; i<freq.size(); i++){
        while(freq[i]--){
            str[j++] = i + 'a';
        }
    }

    return str;
}

int main(){
    string str = "star";
    cout<<stringSorting(str)<<endl;
    return 0;
}