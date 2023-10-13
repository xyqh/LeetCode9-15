#include "LeetCodeBase.h"

TreeNode* buildTree(vector<int>& preorder, int& pIdx, vector<int>& inorder, int il, int ir) {
    if(il > ir) return nullptr;

    int headVal = preorder[pIdx++];
    TreeNode *root = new TreeNode(headVal);
    for(int i = il; i <= ir; ++i){
        if(inorder[i] == headVal){
            root->left = buildTree(preorder, pIdx, inorder, il, i - 1);
            root->right = buildTree(preorder, pIdx, inorder, i + 1, ir);
        }
    }

    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int n = preorder.size(), curIdx = 0;
    return buildTree(preorder, curIdx, inorder, 0, n - 1);
}