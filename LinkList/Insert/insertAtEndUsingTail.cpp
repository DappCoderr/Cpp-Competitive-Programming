#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

int main(){
    vector<int> v = {2,3,4,6,1,8,9};
    Node *head = NULL;
    Node *tail = NULL;

    for(auto x:v){
        if(head == NULL){
            head = new Node(x);
            tail = head;
        }else{
            tail->next = new Node(x);
            tail = tail->next;
        }
    }

    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}