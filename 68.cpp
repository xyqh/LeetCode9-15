#include "LeetCodeBase.h"

vector<string> fullJustify(vector<string>& words, int maxWidth) {
    vector<string> ans;
    int curIdx = 0, n = words.size();
    while(curIdx < n){
        int curLen = 0, endIdx = curIdx;
        while(endIdx < n && curLen < maxWidth){
            int wordLen = words[endIdx].size();
            if(curLen + wordLen <= maxWidth){
                ++endIdx;
                curLen += wordLen;
                ++curLen; // 至少带一个空格
            }else{
                break;
            }
        }
        --curLen; // 去掉最后的空格

        int wordNum = endIdx - curIdx;
        bool isLeft = wordNum == 1 || endIdx == n;
        // 去掉单词就是空格的长度了，记录当前空格
        int spaceLen = maxWidth - curLen + wordNum - 1, curSpaceLen = 0;
        int preSpaceLen = wordNum == 1 ? 1 : spaceLen / (wordNum - 1);

        string sentence = "";
        for(int i = curIdx; i < endIdx; ++i){
            // 插入单词和空格
            sentence.append(words[i]);
            if(i != endIdx - 1){
                int _spaceLen = 1;
                if(not isLeft){
                    _spaceLen = preSpaceLen;
                    if(spaceLen % (wordNum - 1) != 0 && (spaceLen - curSpaceLen) % (endIdx - i - 1) != 0){
                        ++_spaceLen;
                    }
                }
                curSpaceLen += _spaceLen;
                sentence.append(string(_spaceLen, ' '));
            }else if(isLeft){
                // 左对齐最后要补空格
                sentence.append(string(spaceLen - curSpaceLen, ' '));
            }
        }
        ans.push_back(sentence);

        curIdx = endIdx;
    }

    return ans;
}