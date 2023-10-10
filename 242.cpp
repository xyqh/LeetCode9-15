#include "LeetCodeBase.h"

bool isAnagram(string s, string t) {
    unordered_map<char, int> cnt;
    for(char c:s){
        ++cnt[c];
    }
    for(char c:t){
        if(--cnt[c] == 0){
            cnt.erase(c);
        }else if(cnt[c] < 0){
            return false;
        }
    }

    return cnt.empty();
}