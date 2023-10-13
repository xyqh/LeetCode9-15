#include "LeetCodeBase.h"

bool isSymmetric(TreeNode *left, TreeNode *right){
    return (!left && !right) || (left && right && left->val == right->val && isSymmetric(left->left, right->right) && isSymmetric(left->right, right->left));
}

bool isSymmetric(TreeNode *root){
    return isSymmetric(root->left, root->right);
}