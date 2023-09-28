#include "LeetCodeBase.h"

bool canJump(vector<int>& nums) {
    int n = nums.size();
    int i = 0, maxIdx = nums[i];
    while(i <= maxIdx){
        maxIdx = max(maxIdx, i + nums[i]);
        ++i;
        if(maxIdx >= n - 1) return true;
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,3};
    cout << canJump(nums) << endl;
    return 0;
}