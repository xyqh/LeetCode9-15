#include "LeetCodeBase.h"

int removeElement(vector<int>& nums, int val) {
    int ans = nums.size();
    int curIdx = ans - 1;
    while(curIdx >= 0){
        if(nums[curIdx] == val){
            swap(nums[--ans], nums[curIdx]);
        }
        --curIdx;
    }

    return ans;
}