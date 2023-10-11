#include "LeetCodeBase.h"

int findMinArrowShots(vector<vector<int>>& points){
    int ans = 0, n = points.size();
    sort(points.begin(), points.end());
    int curL = points[0][0], curR = points[0][1];
    for(int i = 1; i < n; ++i){
        vector<int>& point = points[i];
        int newL = point[0], newR = point[1];
        if(newL > curR){
            ++ans;
            curL = newL, curR = newR;
        }else{
            curL = newL, curR = min(curR, newR);
        }
    }
    ++ans;
    return ans;
}

int main(){
    vector<vector<int>> points = {{1,2}, {3,4}, {5,6}, {7,8}};
    cout << findMinArrowShots(points) << endl;
    return 0;
}