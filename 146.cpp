#include "LeetCodeBase.h"

struct DoubleListNode{
    int key;
    int val;
    DoubleListNode *next;
    DoubleListNode *prev;
    DoubleListNode(int _key, int _val):
        key(_key),
        val(_val),
        next(nullptr),
        prev(nullptr)
        {};
};

class LRUCache {
public:
    LRUCache(int capacity) {
        _cnt = 0;
        _capacity = capacity;
        mp.clear();
        head = nullptr, tail = nullptr;
    }
    
    int get(int key) {
        if(mp.count(key)){
            moveToFront(mp[key]);
            return mp[key]->val;
        }

        return -1;
    }
    
    void put(int key, int value) {
        DoubleListNode *node = nullptr;
        if(mp.count(key)){
            node = mp[key];
            node->val = value;
        }else{
            node = new DoubleListNode(key, value);
            mp[key] = node;
            if(++_cnt > _capacity){
                removeTail();
            }
        }
        moveToFront(node);
    }

private:
    int _capacity, _cnt;
    DoubleListNode *head, *tail;
    unordered_map<int, DoubleListNode*> mp;

    void moveToFront(DoubleListNode *node){
        if(node == head) return;

        DoubleListNode *prev = node->prev;
        DoubleListNode *next = node->next;
        if(prev){
            prev->next = next;
            if(next == nullptr){
                tail = prev;
            }
        }
        if(next){
            next->prev = prev;
        }
        node->prev = nullptr;
        node->next = head;
        if(head){
            head->prev = node;
        }
        head = node;

        if(tail == nullptr){
            tail = node;
        }
    }

    void removeTail(){
        DoubleListNode *node = tail;
        if(node->prev){
            tail = node->prev;
            tail->next = nullptr;
        }
        mp.erase(node->key);
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

int main(){
    LRUCache lru(2);
    lru.put(2,1);
    lru.put(1,1);
    lru.put(2,3);
    lru.put(4,1);
    cout << lru.get(1) << endl;
    cout << lru.get(2) << endl;
    // LRUCache lru(2);
    // lru.put(1,1);
    // lru.put(2,2);
    // cout << lru.get(1) << endl;
    // lru.put(3,3);
    // cout << lru.get(2) << endl;
    // lru.put(4,4);
    // cout << lru.get(1) << endl;
    // cout << lru.get(3) << endl;
    // cout << lru.get(4) << endl;
    system("pause");
    return 0;
}