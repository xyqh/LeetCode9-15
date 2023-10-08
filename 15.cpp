#include "LeetCodeBase.h"

vector<vector<int>> threeSum(vector<int>& nums){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<vector<int>> ans;
    for(int i = 0; i < n; ++i){
        // 第一个数去重
        if(i > 0 && nums[i] == nums[i - 1]){
            continue;
        }

        int target = -nums[i];
        int k = n - 1;
        for(int j = i + 1; j < n; ++j){
            // 第二个数去重
            if(j > i + 1 && nums[j] == nums[j - 1]){
                continue;
            }

            // 固定第二个数找第三个数
            while(j < k && nums[j] + nums[k] > target){
                --k;
            }
            // 撞到了成不了
            if(j == k){
                break;
            }
            if(nums[j] + nums[k] == target){
                ans.push_back({nums[i], nums[j], nums[k]});
            }
        }
    }

    return ans;
}