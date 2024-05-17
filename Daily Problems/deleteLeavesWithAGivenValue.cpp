#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* removeLeafNodes(TreeNode* root,int target){
    if(root==NULL) return NULL;
    root->left=removeLeafNodes(root->left,target);
    root->right=removeLeafNodes(root->right,target);
    return (root->left == root->right && root->val==target) ? NULL : root;
}

void printTree(TreeNode* root) {
    if (root == NULL) return;
    printTree(root->left);
    cout << root->val << " ";
    printTree(root->right);
}

int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(5);

    int target = 2;
    cout << "Original tree (Inorder): ";
    printTree(root);
    cout << endl;

    root = removeLeafNodes(root, target);

    cout << "Tree after removing leaf nodes with target " << target << " (Inorder): ";
    printTree(root);
    cout << endl;

    return 0;
}

