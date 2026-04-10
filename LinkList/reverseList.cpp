#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* reverseList(vector<int> v, int idx, int n, Node* prev){
    if(idx == n) return prev;
    Node* temp = new Node(v[idx]);
    temp->next = prev;
    return reverseList(v, idx+1, n, temp);
}

int main(){
    Node* HEAD;
    vector<int> v = {2,3,4,5};
    HEAD = reverseList(v, 0, 4, NULL);

    while(HEAD){
        cout<<HEAD->data<<" ";
        HEAD = HEAD->next;
    }
    return 0;
}