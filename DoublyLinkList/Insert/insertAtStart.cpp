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

Node* insertAtStarting(Node* &head, int &x){
    if(head == NULL || head->next == NULL) return head;
    Node* newNode = new Node(x);
    newNode->next = head;
    head->prev = newNode;
    return newNode;
}

int main(){
    vector<int> v = {1,2,3,4,5};
    int x = 112;
    Node* head = createDLL(v);
    head = insertAtStarting(head, x);
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
