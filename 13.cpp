#include "LeetCodeBase.h"

int romanToInt(string s){
    map<char, int> num = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int ans = 0, n = s.size(), pre = 0;
    for(int i = n - 1; i >= 0; --i){
        char curChar = s[i];
        if(num.find(curChar) == num.end()){
            return -1;
        }
        int cur = num[curChar];
        if(cur < pre){
            ans -= cur;
        }else{
            ans += cur;
            pre = cur;
        }
    }

    return ans;
}