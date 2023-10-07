#include "LeetCodeBase.h"

string convert(string s, int numRows){
    if(numRows == 1) return s;
    int n = s.size(), delta = (numRows - 1) * 2;
    string ans = "";
    for(int i = 0; i < numRows; ++i){
        int curDelta = (i != 0 && i != numRows - 1) ? i * 2 : delta;
        for(int j = i; j < n; j += curDelta){
            ans += s[j];
            if(i != 0 && i != numRows - 1){
                curDelta = delta - curDelta;
            }
        }
    }

    return ans;
}