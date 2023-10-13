#include "LeetCodeBase.h"

void singleNumber(TreeNode *root, int& sum, int add){
    if(root == nullptr) return;
    add *= 10;
    add += root->val;
    if(!root->left && !root->right){
        sum += add;
        return;
    }

    singleNumber(root->left, sum, add);
    singleNumber(root->right, sum, add);
}

int sumNumbers(TreeNode *root){
    int sum = 0;
    singleNumber(root, sum, 0);
    return sum;
}