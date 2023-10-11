#include "LeetCodeBase.h"

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval){
    int i = 0, n = intervals.size();
    vector<vector<int>> ans;
    int insL = newInterval[0], insR = newInterval[1];
    bool isPlaced = false;
    for(const vector<int>& interval:intervals){
        if(insR < interval[0]){
            // 在插入区间右边
            if(!isPlaced){
                ans.push_back({insL, insR});
                isPlaced = true;
            }
            ans.push_back(interval);
        }else if(insL > interval[1]){
            // 在插入区间左边
            ans.push_back(interval);
        }else{
            insL = min(insL, interval[0]);
            insR = max(insR, interval[1]);
        }
    }
    
    if(!isPlaced){
        ans.push_back({insL, insR});
    }

    return ans;
}

int main(){
    vector<vector<int>> intervals = {{1,5}};
    vector<int> newInterval = {1,5};
    insert(intervals, newInterval);
    return 0;
}