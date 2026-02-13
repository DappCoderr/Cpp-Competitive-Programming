#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currSize;

    public:
    Stack(int c){
        capacity = c;
        currSize = 0;
        head = NULL;
    }

    bool isEmpty(){
        return head == NULL;
    }

    bool isFull(){
        return capacity == currSize;
    }

    void push(int data){
        if(isFull()){
            cout<<"Overflow";
            return;
        }
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
        currSize++;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Underflow\n";
            return;
        }
        Node* new_head = head->next;
        head->next = NULL;
        Node* temp = head;
        delete temp;
        head = new_head;
        currSize--;
    }

    int size(){
        return currSize;
    }

    int getTop(){
        if(head == NULL){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        return head->data;
    }
};

int main(){
    Stack st(5);
    // cout<<"Get Top: "<<st.getTop()<<endl;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<"Get Top: "<<st.getTop()<<endl;
    st.push(4);
    st.push(5);
    cout<<"Get Top: "<<st.getTop()<<endl;
    st.push(6);
    cout<<"Get Top: "<<st.getTop()<<endl;
    st.pop();
    st.pop();
    cout<<"Get Top: "<<st.getTop()<<endl;
    cout<<"Get Size: "<<st.size()<<endl;
    st.push(6);
    cout<<"Get Top: "<<st.getTop()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<"is Empty"<<st.isEmpty()<<endl;
    cout<<"is Full"<<st.isFull()<<endl;
    cout<<"Get Size: "<<st.size()<<endl;
    cout<<"Get Top: "<<st.getTop()<<endl;
    return 0;
}