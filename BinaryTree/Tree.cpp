#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* left, *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* BinaryTree(){
    int x;
    cin>>x;
    if(x == -1) return NULL;
    Node* temp = new Node(x);
    cout<<"Enter the left child: "<<x<<" ";
    temp->left = BinaryTree();
    cout<<"Enter the right child: "<<x<<" ";
    temp->right = BinaryTree();
    return temp;
}

int main(){
    cout<<"Enter the root node"<<endl;
    Node* root = BinaryTree();
    return 0;  
}