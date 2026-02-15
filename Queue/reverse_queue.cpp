#include<iostream>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &qu){
    if(qu.empty()){
        return;
    }
    int curr = qu.front();
    qu.pop();
    reverseQueue(qu);
    qu.push(curr);
}

int main(){
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    reverseQueue(qu);
    while(not qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    return 0;
}
