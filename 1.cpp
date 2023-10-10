#include "LeetCodeBase.h"

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> hash;
    int n = nums.size();
    for(int i = 0; i < n; ++i){
        int delta = target - nums[i];
        if(hash.count(delta)){
            return {hash[delta], i};
        }
        hash[nums[i]] = i;
    }

    return {};
}