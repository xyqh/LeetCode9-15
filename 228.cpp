#include "LeetCodeBase.h"

vector<string> summaryRanges(vector<int>& nums){
    int n = nums.size();
    vector<string> ans;
    int i = 0;
    while(i < n){
        string s = to_string(nums[i]);
        int j = i + 1;
        while(j < n && nums[j] == nums[j - 1] + 1){
            ++j;
        }
        if(j != i + 1){
            s.append("->");
            s.append(to_string(nums[j - 1]));
        }
        ans.push_back(s);
        i = j;
    }

    return ans;
}