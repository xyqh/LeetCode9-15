#include "LeetCodeBase.h"

Node* connect(Node* root){
    queue<Node*> que;
    if(root) que.push(root);
    while(!que.empty()){
        int n = que.size();
        Node *preNode = nullptr;
        for(int i = 0; i < n; ++i){
            Node *node = que.front();
            que.pop();

            if(node->left) que.push(node->left);
            if(node->right) que.push(node->right);
            if(preNode){
                preNode->next = node;
            }
            preNode = node;
        }
    }

    return root;
}