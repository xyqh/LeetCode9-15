#include "LeetCodeBase.h"

struct DoubleListNode{
    int val;
    int key;
    DoubleListNode* next;
    DoubleListNode* prev;
    DoubleListNode(int _key, int _val):key(_key), val(_val), next(nullptr), prev(nullptr){};
};

class LRUCache {
public:
    LRUCache(int capacity) {
        _capacity = capacity;
        mp = std::unordered_map<int, DoubleListNode*>(_capacity);
        helpHead = new DoubleListNode(-1, -1);
    }
    
    int get(int key) {
        if(mp.find(key) != mp.end()){
            // 移到前面去
            moveToFront(mp[key]);
            return mp[key]->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        DoubleListNode* newNode = nullptr;
        if(mp.find(key) != mp.end() || mp.size() < _capacity){
            if(mp.size() < _capacity){
                newNode = new DoubleListNode(key, value);
                mp[key] = newNode;
            }
            mp[key]->val = value;
            newNode = mp[key];
        }else{
            // 超出容量找到最后一个
            DoubleListNode* cur = helpHead->next;
            while(cur->next){
                cur = cur->next;
            }

            if(cur){
                mp.erase(cur->key);
                cur->prev->next = nullptr;
            }
            newNode = new DoubleListNode(key, value);
        }

        mp[key] = newNode;
        moveToFront(mp[key]);
    }

private:
    int _capacity;
    std::unordered_map<int, DoubleListNode*> mp;
    DoubleListNode* helpHead;

    void moveToFront(DoubleListNode* node){
        // 移到最前面
        if(helpHead->next == node){
            return;
        }

        // 移除当前节点
        DoubleListNode* next = node->next;
        DoubleListNode* prev = node->prev;
        if(prev){
            prev->next = next;
        }
        if(next){
            next->prev = prev;
        }

        // 处理头节点
        DoubleListNode* second = helpHead->next;
        if(second){
            second->prev = node;
        }
        node->next = second;
        helpHead->next = node;
        node->prev = helpHead;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */