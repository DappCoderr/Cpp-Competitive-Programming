#include<iostream>
#include<vector>
using namespace std;

class Node{
    public: 
        int data;
        Node* prev;
        Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

Node* createDLL(vector<int> &v, int idx, Node* back, int size){
    if(idx == size) return NULL;
    Node* temp = new Node(v[idx]);
    temp->prev = back;
    temp->next = createDLL(v, idx+1, temp, size);
    return temp;
}

int main(){
    vector<int> v = {1,2,3,4,5};
    Node* head = createDLL(v, 0, NULL, v.size());
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}