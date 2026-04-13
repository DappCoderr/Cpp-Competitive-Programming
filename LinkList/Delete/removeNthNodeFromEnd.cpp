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


Node* createLL(vector<int>& v) {
    if (v.empty()) return NULL;

    Node* head = new Node(v[0]);
    Node* temp = head;

    for (int i = 1; i < v.size(); i++) {
        temp->next = new Node(v[i]);
        temp = temp->next;
    }

    return head;
}

int sizeOfLL(Node* temp){
    int count = 0;
    while(temp){
        count++;
        temp = temp->next;
    }
    return count;
}

Node* deleteNthNodeFromEnd(Node* &head, int x){
    int size = sizeOfLL(head);
    int index = size - x;

    Node* curr = head;
    
    while(index > 1){
        curr = curr->next;
        index--;
    }
    Node* toDelete = curr->next;
    curr->next = toDelete->next;
    delete toDelete;
    return head;
}

int main(){
    vector<int> v = {5,6,7,3,2};
    int x = 5;
    Node* head = createLL(v);
    Node* temp = deleteNthNodeFromEnd(head,x);

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}