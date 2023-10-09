#include "LeetCodeBase.h"

vector<int> findSubstring(string s, vector<string>& words){
    // // timeout
    // int wordLen = words[0].length();
    // int wordNum = words.size();
    // int n = s.size();

    // unordered_map<string, int> cnt;
    // for(string word:words){
    //     ++cnt[word];
    // }

    // vector<int> ans;
    // for(int i = 0; i < n - wordLen * wordNum + 1; ++i){
    //     unordered_map<string, int> _cnt(cnt);
    //     bool isBreak = false;
    //     for(int j = 0; j < wordNum; ++j){
    //         string _word = s.substr(i + j * wordLen, wordLen);
    //         if(_cnt.find(_word) != _cnt.end()){
    //             if(--_cnt[_word] == 0){
    //                 _cnt.erase(_word);
    //             }
    //         }else{
    //             isBreak = true;
    //             break;
    //         }
    //     }
    //     if(not isBreak && _cnt.empty()){
    //         ans.push_back(i);
    //     }
    // }

    // return ans;

    vector<int> res;
    // m单词个数，n单词长度，ls字符串长度
    int m = words.size(), n = words[0].size(), ls = s.size();
    // 以下标[0, n-1]即0到单词长度为起点 划分单词
    for (int i = 0; i < n && i + m * n <= ls; ++i) {
        unordered_map<string, int> differ;
        // 对应起点划分单词后的前m个单词的哈希，即初始m个单词
        for (int j = 0; j < m; ++j) {
            ++differ[s.substr(i + j * n, n)];
        }
        // 减去目标单词的哈希
        for (string &word: words) {
            if (--differ[word] == 0) {
                differ.erase(word);
            }
        }

        // 此时differ是单词出现频次的差值，若差值全部为0，说明完全匹配        
        // 滑动窗口，窗口右移，新涉及的单词哈希++，前一个单词哈希--
        for (int start = i; start < ls - m * n + 1; start += n) {
            if (start != i) {
                string word = s.substr(start + (m - 1) * n, n);
                if (++differ[word] == 0) {
                    differ.erase(word);
                }
                word = s.substr(start - n, n);
                if (--differ[word] == 0) {
                    differ.erase(word);
                }
            }
            if (differ.empty()) {
                res.emplace_back(start);
            }
        }
    }
    return res;
}