#include "LeetCodeBase.h"

bool wordPattern(string pattern, string s){
    unordered_map<char, string> p2s;
    unordered_map<string, char> s2p;
    int i = 0, n = pattern.length();
    int sIdx = 0, sLen = s.length();
    while(i < n && sIdx < sLen){
        char subP = pattern[i];
        int eIdx = sIdx + 1;
        while(eIdx < sLen && s[eIdx] != ' '){
            ++eIdx;
        }
        string word = s.substr(sIdx, eIdx - sIdx);
        if((p2s.count(subP) && p2s[subP] != word) || (s2p.count(word) && s2p[word] != subP)){
            return false;
        }
        p2s[subP] = word;
        s2p[word] = subP;
        ++i;
        sIdx = min(sLen, ++eIdx);
    }

    return i == n && sIdx == sLen;
}