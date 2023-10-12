#include "LeetCodeBase.h"

ListNode* reverseBetween(ListNode* head, int left, int right) {
    int cur = 1;
    ListNode *node = new ListNode(-1), *ans = node;
    while(head){
        if(left <= cur && cur <= right){
            if(node->next){
                ListNode *newNode = new ListNode(head->val);
                newNode->next = node->next;
                node->next = newNode;
            }else{
                node->next = new ListNode(head->val);
            }
            if(cur == right){
                while(node->next){
                    node = node->next;
                }
            }
        }else{
            node->next = new ListNode(head->val);
            node = node->next;
        }
        head = head->next;
        ++cur;
    }

    return ans->next;
}