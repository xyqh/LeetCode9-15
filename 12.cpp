#include "LeetCodeBase.h"

string intToRoman(int num){
    string ans = "";
    vector<pair<char, int>> maps = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int curIndex = maps.size() - 1;
    while(num > 0){
        int preIndex = curIndex % 2 == 0 ? (curIndex >= 2 ? curIndex - 2 : curIndex) : curIndex - 1;
        if(num >= maps[curIndex].second || (num >= maps[curIndex].second - maps[preIndex].second && num - maps[curIndex].second < maps[preIndex].second)){
            if(num >= maps[curIndex].second){
                num -= maps[curIndex].second;
                ans += maps[curIndex].first;
            }else{
                num += maps[preIndex].second;
                ans += maps[preIndex].first;
                num -= maps[curIndex].second;
                ans += maps[curIndex].first;
            }
        }else{
            --curIndex;
        }
    }

    return ans;
}