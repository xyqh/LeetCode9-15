#include "LeetCodeBase.h"

Node* copyRandomList(Node* head) {
    unordered_map<Node*, Node*> mp;
    Node *node = head;
    Node *newNode = new Node(-1), *ans = newNode;
    while(node){
        if(!mp.count(node)){
            newNode->next = new Node(node->val);
            mp[node] = newNode->next;
        }else{
            newNode->next = mp[node];
        }

        newNode = newNode->next;
        if(node->random){
            if(!mp.count(node->random)){
                newNode->random = new Node(node->random->val);
                mp[node->random] = newNode->random;
            }else{
                newNode->random = mp[node->random];
            }
        }
        node = node->next;
    }

    return ans->next;
}