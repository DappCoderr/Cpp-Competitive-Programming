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

void preOrder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root){
    if(root == NULL) return;
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root == NULL) return;
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";
}

Node* BinaryTree(){
    int x;
    cin>>x;
    if(x == -1) return NULL;
    Node* temp = new Node(x);
    cout<<"Enter the left child: "<<x<<" : ";
    temp->left = BinaryTree();
    cout<<"Enter the right child: "<<x<<" : ";
    temp->right = BinaryTree();
    return temp;
}

int main(){
    cout<<"Enter the root node"<<endl;
    Node* root = BinaryTree();
    cout<<endl;

    cout<<"PreOrder: ";
    preOrder(root);
    cout<<endl;

    cout<<"InOrder: ";
    inOrder(root);
    cout<<endl;

    cout<<"PostOrder: ";
    postOrder(root);
    cout<<endl;
    return 0;  

}