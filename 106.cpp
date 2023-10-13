#include "LeetCodeBase.h"

TreeNode* buildTree(vector<int>& inorder, int il, int ir, vector<int>& postorder, int& pIdx) {
    if(il > ir) return nullptr;
    int headVal = postorder[pIdx--];
    TreeNode *root = new TreeNode(headVal);
    for(int i = ir; i >= il; --i){
        if(inorder[i] == headVal){
            root->right = buildTree(inorder, i + 1, ir, postorder, pIdx);
            root->left = buildTree(inorder, il, i - 1, postorder, pIdx);
        }
    }

    return root;
}

TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    int n = inorder.size(), curIdx = n - 1;
    return buildTree(inorder, 0, n - 1, postorder, curIdx);
}