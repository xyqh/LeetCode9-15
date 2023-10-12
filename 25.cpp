#include "LeetCodeBase.h"

pair<ListNode*, ListNode*> reverseList(ListNode *head, ListNode *tail){
    if(head == nullptr) return {nullptr, nullptr};

    ListNode *prev = tail->next, *curr = head;
    while(prev != tail){
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return {tail, head};
}

ListNode* reverseKGroup(ListNode* head, int k) {
    if(k <= 1) return head;
    ListNode *dummyNode = new ListNode(-1), *ans = dummyNode;
    dummyNode->next = head;
    while(head){
        ListNode *tail = dummyNode;
        for(int i = 0; i < k; ++i){
            tail = tail->next;
            if(!tail){
                return ans->next;
            }
        }

        ListNode *next = tail->next;
        tie(head, tail) = reverseList(head, tail);
        dummyNode->next = head;
        tail->next = next;
        dummyNode = tail;
        head = next;
    }

    return ans->next;
}