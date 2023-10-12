#include "LeetCodeBase.h"

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode *hair = new ListNode(0);
    hair->next = head;
    ListNode *slow = hair, *fast = hair;
    int i = 0;
    while(i < n){
        fast = fast->next;
        ++i;
    }

    while(fast->next){
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = slow->next->next;
    return hair->next;
}