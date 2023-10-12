#include "LeetCodeBase.h"

ListNode* rotateRight(ListNode* head, int k) {
    if(head == nullptr) return nullptr;
    ListNode *slow = head, *fast = head;
    int i = 0, n = -1;
    while(i < k){
        fast = fast->next;
        if(fast == nullptr){
            fast = head;
            n = i + 1;
            i = -1, k %= n;
        }
        ++i;
    }
    while(fast->next){
        slow = slow->next;
        fast = fast->next;
    }

    fast->next = head;
    head = slow->next;
    slow->next = nullptr;

    return head;
}

int main(){
    ListNode *node = new ListNode(1);
    rotateRight(node, 1);
    return 0;
}