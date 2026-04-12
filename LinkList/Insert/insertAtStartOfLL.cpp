#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

int main(){
    Node *head = NULL;
    vector<int> v = {2,3,4,5,6,7};

    for(int i=0; i<v.size(); i++){
        if(head == NULL){
            head = new Node(v[i]);
        }else{
            Node *temp;
            temp = new Node(v[i]);
            temp->next = head;
            head = temp;
        }
    }

    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}