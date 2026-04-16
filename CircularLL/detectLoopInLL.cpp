#include<iostream>
#include<unordered_map>
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

bool detectLoopInLinkList(Node* head){
    unordered_map<Node*, bool> visited;

    if(head == NULL || head->next == NULL) return false;

    Node* curr = head;

    while(curr){
        if(visited[curr] == true) return true;
        visited[curr] = true;
        curr = curr->next;
    }

    return false;
}

int main(){

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->next = third;
    third->next = head;

    cout << detectLoopInLinkList(head);

    return 0;
}