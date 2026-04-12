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

Node* createListListUsingRecursion(vector<int> &v, int idx, int n){
    if(idx == n) return NULL;
    Node* head = new Node(v[idx]);
    head->next = createListListUsingRecursion(v, idx+1, n);
    return head;
}

int main(){
    vector<int> v = {2,3,4,5,6};
    Node* HEAD = NULL;
    HEAD = createListListUsingRecursion(v, 0, 5);

    while(HEAD){
        cout<<HEAD->data<<" ";
        HEAD = HEAD->next;
    }
    return 0;
}