#include "LeetCodeBase.h"

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int curIdx = 0, replaceIdx = 0;
    while(curIdx < n){
        int nextIdx = curIdx + 1;
        while(nextIdx < n){
            if(nums[curIdx] == nums[nextIdx]){
                // 重复
                ++nextIdx;
            }else{
                break;
            }
        }
        swap(nums[curIdx], nums[replaceIdx++]);
        curIdx = nextIdx;
    }

    return replaceIdx;
}