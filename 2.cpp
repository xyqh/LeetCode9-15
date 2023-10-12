#include "LeetCodeBase.h"

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *dummyNode = new ListNode(-1), *ans = dummyNode;
    int in = 0;
    while(l1 && l2){
        int sum = l1->val + l2->val + in;
        dummyNode->next = new ListNode(sum % 10);
        in = sum / 10;
        l1 = l1->next;
        l2 = l2->next;
        dummyNode = dummyNode->next;
    }

    while(l1){
        int sum = l1->val + in;
        dummyNode->next = new ListNode(sum % 10);
        in = sum / 10;
        l1 = l1->next;
        dummyNode = dummyNode->next;
    }
    while(l2){
        int sum = l2->val + in;
        dummyNode->next = new ListNode(sum % 10);
        in = sum / 10;
        l2 = l2->next;
        dummyNode = dummyNode->next;
    }
    if(in){
        dummyNode->next = new ListNode(in);
    }

    return ans->next;
}