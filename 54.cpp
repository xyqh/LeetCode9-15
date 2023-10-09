#include "LeetCodeBase.h"

vector<int> spiralOrder(vector<vector<int>>& matrix){
    int m = matrix.size(), n = matrix[0].size();
    vector<int> ans(m * n, 0);
    int i = 0, j = 0, cnt = 0;
    int l = 0, r = n - 1, t = 0, b = m - 1;
    while(cnt < m * n){
        while(j <= r){
            ans[cnt++] = matrix[i][j++];
        }
        if(cnt >= m * n) break;
        ++t;
        --j;
        ++i;
        while(i <= b){
            ans[cnt++] = matrix[i++][j];
        }
        if(cnt >= m * n) break;
        --r;
        --i;
        --j;
        while(j >= l){
            ans[cnt++] = matrix[i][j--];
        }
        if(cnt >= m * n) break;
        --b;
        ++j;
        --i;
        while(i >= t){
            ans[cnt++] = matrix[i--][j];
        }
        if(cnt >= m * n) break;
        ++l;
        ++i;
        ++j;
    }

    return ans;
}