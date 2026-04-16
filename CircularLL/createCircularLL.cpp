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

Node* createCircularLL(vector<int> &v){
    if(v.empty()) return NULL;
    Node* head = new Node(v[0]);
    Node* newNode = head;
    for(int i=1; i<v.size(); i++){
        Node* temp = new Node(v[i]);
        newNode->next = temp;
        newNode = newNode->next;
    }
    newNode->next = head;
    return head;
}

int main(){
    vector<int> v = {1,2,3,4,5,6};

    Node* head = createCircularLL(v);

    Node* temp = head;
    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != head);
    return 0;
}