#include "LeetCodeBase.h"

int lengthOfLastWord(string s){
    int ans = 0;
    int n = s.size(), curIdx = n - 1;
    while(curIdx >= 0 && s[curIdx] == ' '){
        --curIdx;
    }
    while(curIdx >= 0 && s[curIdx--] != ' '){
        ++ans;
    }

    return ans;
}