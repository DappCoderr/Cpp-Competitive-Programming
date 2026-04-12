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

Node* deleteUsingRecursion(Node* &head, int x){
    if(x==1){
        Node* temp = head->next;
        delete head;
        return temp;
    }
    head->next = deleteUsingRecursion(head->next, x-1);
    return head;
}

int main(){
    vector<int> v = {5,6,7,3,2};
    int x = 1;
    Node* head = createLL(v);
    Node* temp = deleteUsingRecursion(head,x);

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}