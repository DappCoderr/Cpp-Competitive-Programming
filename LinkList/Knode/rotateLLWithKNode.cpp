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

Node* tailPointer(Node* temp){
    Node* tail = temp;
    while(tail->next != NULL){
        tail = tail->next;
    }
    return tail;
}

Node* rotateLL(Node* &head, int &k){
    if (head==NULL or head->next==NULL) return head;
    int count = sizeOfLL(head);
    k = k%count;
    if (k == 0) return head;
    count -= k;

    Node* curr = head;
    Node* tail = tailPointer(head);

    while(count>1){
        curr = curr->next;
        count--;
    }

    Node* newHead = curr->next;
    curr->next = NULL;
    tail->next = head;
    return newHead;
}

int main(){
    vector<int> v = {1,2,3,4,5};
    int k = 3;
    Node* head = createLL(v);
    Node* temp = rotateLL(head, k);

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}