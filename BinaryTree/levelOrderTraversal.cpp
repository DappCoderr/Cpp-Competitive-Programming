#include<iostream>
#include<vector>
#include<queue>
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

void levelTraversal(Node* root, vector<int> &ans){
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* curr = q.front();
        ans.push_back(curr->data);
        q.pop();

        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        } 
    }
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
    vector<int> ans;
    cout<<"Enter the root node: "<<endl;
    Node* root = BinaryTree();
    levelTraversal(root, ans);
    for(auto x : ans){
        cout<<x<<" ";
    }
    return 0;
}