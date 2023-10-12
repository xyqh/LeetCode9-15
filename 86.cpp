#include "LeetCodeBase.h"

ListNode* partition(ListNode* head, int x) {
    ListNode *hairS = new ListNode(0), *hairB = new ListNode(0), *hair = hairS, *hair2 = hairB;
    while(head){
        if(head->val >= x){
            hairB->next = head;
            hairB = hairB->next;
        }else{
            hairS->next = head;
            hairS = hairS->next;
        }
        head = head->next;
    }
    hairB->next = nullptr;
    hairS->next = hair2->next;
    return hair->next;
}