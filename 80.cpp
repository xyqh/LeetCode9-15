#include "LeetCodeBase.h"

int removeDuplicates(vector<int>& nums) {
    int n = nums.size(), ans = 0;
    int k = 2;
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
        int inc = min(k, nextIdx - curIdx);
        for(int i = 0; i < inc; ++i){
            swap(nums[curIdx + i], nums[replaceIdx++]);
        }
        curIdx = nextIdx;
        ans += inc;
    }

    return ans;
}