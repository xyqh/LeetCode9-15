#include "LeetCodeBase.h"

int maxProfit(vector<int>& prices) {
    int ans = 0, in = 0, out = 1;
    int n = prices.size();
    while(out < n){
        if(prices[out] > prices[in]){
            ans = max(ans, prices[out] - prices[in]);
        }else if(prices[out] < prices[in]){
            in = out;
        }
        ++out;
    }

    return ans;
}