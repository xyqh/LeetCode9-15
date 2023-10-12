#include "LeetCodeBase.h"

bool hasCycle(ListNode *head) {
    if(head == nullptr) return false;
    ListNode *slow = head, *fast = head->next;
    while(fast && fast->next && fast != slow){
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow == fast;
}