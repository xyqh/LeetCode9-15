#include "LeetCodeBase.h"

bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> hash;
    int n = nums.size();
    for(int i = 0; i < n; ++i){
        if(hash.count(nums[i]) && i - hash[nums[i]] <= k){
            return true;
        }
        hash[nums[i]] = i;
    }

    return false;
}