#include "LeetCodeBase.h"

TreeNode* invertTree(TreeNode* root) {
    if(root == nullptr) return nullptr;
    TreeNode *tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    invertTree(root->left);
    invertTree(root->right);

    return root;
}