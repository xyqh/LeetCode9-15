#include "LeetCodeBase.h"

int lengthOfLongestSubstring(string s){
    int len = 0, n = s.size();
    int left = 0, right = 0;
    unordered_map<char, int> hash;
    while(right < n){
        if(hash.find(s[right]) != hash.end() && hash[s[right]] > 0){
            // 重复了
            while(s[left] != s[right]){
                hash[s[left++]] = 0;
            }
            hash[s[left++]] = 0;
        }
        hash[s[right]] = 1;
        len = max(len, right - left + 1);
        ++right;
    }

    return len;
}

int main(){
    string s = "tmmzuxt";
    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}