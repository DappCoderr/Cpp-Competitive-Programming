#include<iostream>
using namespace std;
#include<vector>

int main(){
    // [1,2,3,4,5]
    // 
    vector<int> v;
    int size;
    cout<<"Enter input: "<<endl;
    cin>>size;

    for(int i=0; i<size; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    int i=0, sum=0; 
    while(i<=size-1){
        if(i == 0){
            v[i] = sum + v[i];
            sum = v[i];
            i++;
        }else{
            v[i] = v[i] + sum;
            sum = v[i];
            i++;
        }
    }

    for(int i=0; i<size; i++){
        cout<<v[i]<<" ";
    }
}