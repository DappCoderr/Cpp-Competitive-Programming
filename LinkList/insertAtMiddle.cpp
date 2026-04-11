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

void insertAtMiddle(Node* &head, int x){
    Node* temp = head;

    for(int i = 0; i < x-1; i++){
        temp = temp->next;
    }

    Node* newNode = new Node(8);
    newNode->next = temp->next;
    temp->next = newNode;
}

int main(){
    vector<int> v = {1,2,3,4,5};
    int x = 2;
    Node* head = createLL(v);
    insertAtMiddle(head,x);

    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}