#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        Node* prev;
        int data;
        Node* next;
    Node(int val){
        prev = NULL;
        data = val;
        next = NULL;
    }
};

Node* createDLL(vector<int> &v){
    if(v.empty()) return NULL;
    Node* head = new Node(v[0]);
    Node* tail = head;

    for(int i=1; i<v.size(); i++){
        Node* newNode = new Node(v[i]);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    return head;
}

Node* deleteLastNode(Node* &head){
    if(head == NULL || head->next == NULL) return head;
    Node* temp = head;
    
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = NULL;
    delete toDelete;
    return head;
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10,11};
    Node* head = createDLL(v);
    head = deleteLastNode(head);
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}