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

Node* insertAtEnd(Node* &head, int &x){
    if(head == NULL || head->next == NULL) return head;
    Node* newNode = new Node(x);
    Node* temp = head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
    
    return head;
}

int main(){
    vector<int> v = {1,2,3,4,5};
    int x = 112;
    Node* head = createDLL(v);
    head = insertAtEnd(head, x);
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
