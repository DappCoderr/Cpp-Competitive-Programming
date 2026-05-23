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

void countLeaves(Node* root, int &count){
    if(root == NULL) return;
    if(root->left == NULL and root->right == NULL){
        count++;
    }
    countLeaves(root->left, count);
    countLeaves(root->right, count);
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
    vector<int> arr = {1,2,4,8,-1,-1,9,-1,-1,5,-1,-1,3,6,10,12,-1,-1,-1,11,-1,13,-1,-1,7,-1,-1};
    int count = 0;
    int i = 0;
    Node* root = buildTree(arr, i);

    countLeaves(root, count);
    cout << "Count leave node: " << count;

    return 0;
}