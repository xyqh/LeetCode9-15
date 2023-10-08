#include "LeetCodeBase.h"

bool isSubsequence(string s, string t) {
    // simple solution
    // int validLen = s.size(), n = t.size();
    // int subIdx = 0, totalIdx = 0;
    // while(subIdx < validLen && totalIdx < n){
    //     if(s[subIdx] == t[totalIdx]){
    //         ++subIdx;
    //     }
    //     ++totalIdx;
    // }

    // return subIdx == validLen;

    int m = s.size(), n = t.size();
    // 用于记录t中，在位置i及之后字母j最早出现的下标位置
    vector<vector<int>> f(n + 1, vector<int>(26, 0));
    for(int i = 0; i < 26; ++i){
        f[n][i] = n;
    }

    for(int i = n - 1; i >= 0; --i){
        for(int j = 0; j < 26; ++j){
            if(t[i] == 'a' + j){
                f[i][j] = i;
            }else{
                f[i][j] = f[i + 1][j];
            }
        }
    }

    int add = 0;
    for(int i = 0; i < m; ++i){
        int idx = f[add][s[i] - 'a'];
        if(idx >= n) return false;
        add = idx + 1;
    }

    return true;
}