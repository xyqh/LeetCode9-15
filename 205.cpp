#include "LeetCodeBase.h"

bool isIsomorphic(string s, string t) {
    // 这题力扣有病，测试用例加了"12", "\u0067\u0067", 长度都不一样。题目里还写了t.length == s.length
    if(s.length() != t.length()) return false;

    unordered_map<char, char> s2t;
    unordered_map<char, char> t2s;
    int n = s.size();
    for(int i = 0; i < n; ++i){
        if((s2t.find(s[i]) != s2t.end() && s2t[s[i]] != t[i]) || (t2s.find(t[i]) != t2s.end() && t2s[t[i]] != s[i])){
            return false;
        }
        s2t[s[i]] = t[i];
        t2s[t[i]] = s[i];
    }

    return true;
}