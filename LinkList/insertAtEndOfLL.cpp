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

void printList(Node *head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout << endl;
}

int main(){

    Node *head = NULL;
    vector<int> v = {1,2,3,4,5};
    for(auto x: v){
        Node *node = new Node(x);
        node->next = head;
        head = node;
    }

    cout<<"Before LL:"<<endl;

    Node *temp = head;
    printList(temp);

    cout<<endl;

    Node *temp1 = head;
    while(temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next = new Node(3);

    cout<<"After LL:"<<endl;

    Node *temp2 = head;
    printList(temp2);

    return 0;
}