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

Node* deleteLastNode(Node* &head){
    Node* temp = head;
    if(head == NULL){
        return head;
    }
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = NULL;
    delete deleteNode;
    return head;
}

int main(){
    vector<int> v = {8,4,2,1};
    Node* head = createLL(v);
    Node* temp = deleteLastNode(head);

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}