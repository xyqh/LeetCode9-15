#include "LeetCodeBase.h"

class MinStack {
    stack<int> s1, s2;
public:
    MinStack() {
        s1 = stack<int>();
        s2 = stack<int>();
    }
    
    void push(int val) {
        s1.push(val);
        if(s2.empty() || s2.top() > val){
            s2.push(val);
        }else{
            s2.push(s2.top());
        }
    }
    
    void pop() {
        s1.pop();
        s2.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};