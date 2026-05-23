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

int largestValueEachLevel(Node* root){
    if(root == NULL) return 0;

    int leftHeight = largestValueEachLevel(root->left);
    int rightHeight = largestValueEachLevel(root->right);

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
    vector<int> arr = {6,7,9,-1,-1,8,6,-1,-1,-1,3,11,-1,12,-1,-1,5,-1,-1};
    int i = 0;
    Node* root = buildTree(arr, i);

    int count = largestValueEachLevel(root);
    cout << "Count leave node: " << count;

    return 0;
}