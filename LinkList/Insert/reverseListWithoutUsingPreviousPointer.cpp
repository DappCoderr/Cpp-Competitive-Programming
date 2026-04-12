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

Node* reverseList(Node* head) {
        if(head == NULL || head->next == NULL) return head;
        Node* newHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }

int main(){
    vector<int> v = {1,2,3,4};
    Node* head = createLL(v);
    Node* temp = reverseList(head);

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}