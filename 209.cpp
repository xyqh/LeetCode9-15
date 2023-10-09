#include "LeetCodeBase.h"

int minSubArrayLen(int target, vector<int>& nums){
    int ans = INT_MAX, sum = 0;
    int slow = 0, fast = 0, n = nums.size();
    while(fast < n){
        sum += nums[fast];

        while(sum >= target){
            ans = min(ans, fast - slow + 1);
            sum -= nums[slow];
            ++slow;
        }
        ++fast;
    }

    return ans == INT_MAX ? 0 : ans;
}