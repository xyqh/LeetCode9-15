#include "LeetCodeBase.h"

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // // 排序法
    // unordered_map<string, vector<string>> ans_map;
    // int n = strs.size();
    // for(int i = 0; i < n; ++i){
    //     string str = strs[i];
    //     sort(str.begin(), str.end());
    //     ans_map[str].push_back(strs[i]);
    // }

    // vector<vector<string>> ans;
    // for(auto it = ans_map.begin(); it != ans_map.end(); ++it){
    //     ans.push_back(it->second);
    // }

    // return ans;

    // 排序nlog(n)，这里用遍历计数hash
    unordered_map<string, vector<string>> ans_map;
    int n = strs.size();
    for(int i = 0; i < n; ++i){
        string str = "";
        // 这里考虑到题目中字母长度的限制是100，使用了char而不是int转string再拼接
        // int转string拼接有问题：{"bdddddddddd","bbbbbbbbbbc"}，得到的key相同都是：010100000000000000000000000
        // 用char就不会有这个问题，char有256
        vector<char> cnt(26, '0');
        for(int j = 0; j < strs[i].length(); ++j){
            ++cnt[strs[i][j] - 'a'];
        }
        for(int j = 0; j < 26; ++j){
            str.push_back(cnt[j]);
        }
        cout << strs[i] << " " << str << endl;

        ans_map[str].push_back(strs[i]);
    }

    vector<vector<string>> ans;
    for(auto it = ans_map.begin(); it != ans_map.end(); ++it){
        ans.push_back(it->second);
    }

    return ans;
}

int main(){
    vector<string> strs = {"bdddddddddd","bbbbbbbbbbc"};
    auto ans = groupAnagrams(strs);
    for(auto vec:ans){
        for(auto s:vec){
            cout << s << " ";
        }
        cout << endl;
    }

    return 0;
}