#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val) , left(nullptr) , right(nullptr) {}
};

int traverse(Node* root, int &moves){
    if(root==nullptr) return 0;

    int left=traverse(root->left,moves);
    int right=traverse(root->right,moves);
    moves+=abs(left)+abs(right);
    return root->data+left+right-1;
}

int distributeCoins(Node* root){
    int moves=0;
    traverse(root,moves);
    return moves;
}

void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    // Creating the binary tree:
    //         0
    //       /   \
    //      0     0
    //     / \   / \
    //    4   0 3   0
    Node* root = new Node(0);
    root->left = new Node(0);
    root->right = new Node(0);
    root->left->left = new Node(4);
    root->left->right = new Node(0);
    root->right->left = new Node(3);
    root->right->right = new Node(0);

    cout << "Preorder traversal of the tree: ";
    preorder(root);
    cout << endl;

    int moves = distributeCoins(root);
    cout << "Number of moves required to distribute the coins: " << moves << endl;

    return 0;
}

