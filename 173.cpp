#include "LeetCodeBase.h"

class BSTIterator {
    TreeNode *cur;
    stack<TreeNode*> stk;
public:
    BSTIterator(TreeNode* root) : cur(root) {
        stk = stack<TreeNode*>();
    }
    
    int next() {
        // 迭代中序遍历二叉树的过程拆分一下
        while(cur != nullptr){
            stk.push(cur);
            cur = cur->left;
        }
        cur = stk.top();
        stk.pop();
        int ret = cur->val;
        cur = cur->right;
        return ret;
    }
    
    bool hasNext() {
        return cur != nullptr || !stk.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */