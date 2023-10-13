#include "LeetCodeBase.h"

int maxSum = INT_MIN;

// 计算每个节点的最大贡献值
int maxGain(TreeNode *root){
    if(root == nullptr) return 0;

    int leftGain = max(maxGain(root->left), 0);
    int rightGain = max(maxGain(root->right), 0);

    // 路径和是左节点的最大贡献值+右节点的最大贡献值+自身
    int sum = root->val + leftGain + rightGain;
    maxSum = max(maxSum, sum);

    // 但是节点的最大贡献值是自身+（左/右）节点的最大贡献值
    return root->val + max(leftGain, rightGain);
}

int maxPathSum(TreeNode *root){
    maxGain(root);
    return maxSum;
}