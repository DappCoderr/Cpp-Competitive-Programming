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

int sumOfAllNodes(Node* root){
    if(root == NULL) return 0;
    return (root->data + sumOfAllNodes(root->left) + sumOfAllNodes(root->right));
}

Node* buildTree(vector<int> &arr, int &i) {
    if (i >= arr.size() || arr[i] == -1) {
        i++;
        return NULL;
    }
    Node* root = new Node(arr[i++]);
    root->left = buildTree(arr, i);
    root->right = buildTree(arr, i);

    return root;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, -1, -1, 5, -1, -1, 6, -1, -1, 7, -1, 8, -1, 10, -1, -1};

    int i = 0;
    Node* root = buildTree(arr, i);

    int size = sumOfAllNodes(root);
    cout << "Size of the tree: " << size;

    return 0;
}