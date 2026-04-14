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

Node* deleteEveryKNode(Node* &head, int x){
    if(head==NULL || x<=1) return head;
    Node* curr = head;
    Node* prev = NULL;
    int count = 1;
    while(curr){
        if(count%x==0){
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }else{
            prev = curr;
            curr = curr->next;
        }
        count++;
    }
    return head;
}

int main(){
    vector<int> v = {5,6,7,3,2,1,4,8,9,10,12,16};
    int x = 3;
    Node* head = createLL(v);
    Node* temp = deleteEveryKNode(head,x);

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}