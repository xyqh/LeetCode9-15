#include "LeetCodeBase.h"

ListNode *deleteDuplicates(ListNode *head){
    ListNode *hair = new ListNode(0), *node = hair;
    while(head){
        int curNum = head->val;
        ListNode *nex = head->next;
        while(nex && curNum == nex->val){
            nex = nex->next;
        }
        if(head->next == nex){
            node->next = head;
            head->next = nullptr;
            node = node->next;
        }
        head = nex;
    }

    return hair->next;
}