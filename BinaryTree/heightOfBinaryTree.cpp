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

int heightOfTree(Node* root){
    if(root == NULL) return 0;

    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);

    return 1 + max(leftHeight, rightHeight);
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
    vector<int> arr = {1,2,4,8,-1,-1,-1,5,9,-1,13,-1,-1,-1,3,6,10,-1,-1,11,-1,-1,7,-1,12,-1,14,15,-1,-1,-1};
    int i = 0;
    Node* root = buildTree(arr, i);

    int count = heightOfTree(root);
    cout << "Count leave node: " << count;

    return 0;
}