#include "LeetCodeBase.h"

bool exist(TreeNode *root, int level, int k){
    // low到high范围内的数索引是[1<<level, (1<<level+1) - 1]，二进制标识为level位，且其中最高位必为1，因此从第二高位开始比较，即1<<level-1
    int bit = 1 << (level - 1);
    while(root && bit > 0){
        if(bit&k){
            root = root->right;
        }else{
            root = root->left;
        }
        bit >>= 1;
    }

    return root != nullptr;
}

int countNodes(TreeNode* root) {
    if(root == nullptr) return 0;
    int level = 0;
    TreeNode *left = root;
    while(left->left){
        left = left->left;
        ++level;
    }

    int low = 1 << level, high = (1 << level + 1) - 1;
    while(low < high){
        // 这里的mid采用+1/2是为了取较大值，更新时偏向更新mid-1，避免low=mid时死循环
        int mid = low + (high - low + 1 >> 1);
        if(exist(root, level, mid)){
            low = mid;
        }else{
            high = mid - 1;
        }
    }

    return low;
}