#include "LeetCodeBase.h"

void flatten(TreeNode *root){
    TreeNode *curr = root;
    while(curr){
        TreeNode* next = curr->left;
        // 当前节点有左节点的话，找到当前节点的右节点的前序节点，即当前节点左节点的最右节点。之后把前序节点的右节点设为当前的右节点，再把左节点移到右节点位置
        if(next){
            TreeNode* processor = next;
            while(processor->right){
                processor = processor->right;
            }
            processor->right = curr->right;
            curr->right = next;
            curr->left = nullptr;
        }
        curr = curr->right;
    }
}

int main(){
    TreeNode *node1 = new TreeNode(1);
    TreeNode *node2 = new TreeNode(2);
    TreeNode *node3 = new TreeNode(3);
    TreeNode *node4 = new TreeNode(4);
    TreeNode *node5 = new TreeNode(5);
    TreeNode *node6 = new TreeNode(6);
    node1->left = node2;
    node1->right = node5;
    node2->left = node3;
    node2->right = node4;
    node5->right = node6;

    flatten(node1);
    // flatten(nullptr);
    // flatten(node6);
    return 0;
}