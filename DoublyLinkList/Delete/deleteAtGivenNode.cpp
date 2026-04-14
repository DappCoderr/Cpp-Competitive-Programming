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

Node* deleteAtAGivenNode(Node* &head, int &idx){
    if(head == NULL || head->next == NULL) return head;
    Node* temp = head;

    while(idx-1>1){
        temp=temp->next;
        idx--;
    }

    Node* toDelete = temp->next;
    Node* nextNode = toDelete->next;
    temp->next = nextNode;
    if(nextNode) nextNode->prev = temp;
    delete toDelete;
    return head;
}

int main(){
    vector<int> v = {1,2,3,4,5};
    int idx = 4;
    Node* head = createDLL(v);
    head = deleteAtAGivenNode(head, idx);
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}