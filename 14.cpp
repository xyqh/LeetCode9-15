#include "LeetCodeBase.h"

string commonPrefix(string& str1, string& str2){
    int len1 = str1.size(), len2 = str2.size();
    int curIdx = 0;
    while(curIdx < min(len1, len2)){
        if(str1[curIdx] == str2[curIdx]){
            ++curIdx;
        }else{
            break;
        }
    }

    return str1.substr(0, curIdx);
}

string longestCommonPrefix(vector<string>& strs){
    int n = strs.size();
    string ans = strs[0];
    for(int i = 1; i < n; ++i){
        ans = commonPrefix(ans, strs[i]);
    }

    return ans;
}