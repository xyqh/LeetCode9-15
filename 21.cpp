#include "LeetCodeBase.h"

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *dummyNode = new ListNode(-1), *ans = dummyNode;
    while(list1 && list2){
        if(list1->val <= list2->val){
            dummyNode->next = list1;
            list1 = list1->next;
        }else{
            dummyNode->next = list2;
            list2 = list2->next;
        }
        dummyNode = dummyNode->next;
    }

    if(list1){
        dummyNode->next = list1;
    }
    if(list2){
        dummyNode->next = list2;
    }

    return ans->next;
}