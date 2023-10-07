#include "LeetCodeBase.h"

string reverseWords(string s) {
    string ans = "";
    int n = s.size(), i = n - 1;
    while(i >= 0){
        while(i >= 0 && s[i] == ' ') --i;
        if(i == -1) break;
        int end = i;
        while(i >= 0 && s[i] != ' ') --i;
        ans.append(s.substr(i + 1, end - i));
        ans.push_back(' ');
        --i;
    }

    return ans.substr(0, ans.size() - 1);
}