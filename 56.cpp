#include "LeetCodeBase.h"

vector<vector<int>> merge(vector<vector<int>>& intervals){
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    int curL = intervals[0][0], curR = intervals[0][1];
    int i = 1, n = intervals.size();
    while(i < n){
        int newL = intervals[i][0], newR = intervals[i][1];
        if(newL > curR){
            ans.push_back({curL, curR});
            curL = newL, curR = newR;
        }else{
            curR = max(curR, newR);
        }
        ++i;
    }
    ans.push_back({curL, curR});

    return ans;
}