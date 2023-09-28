#include "LeetCodeBase.h"

int hIndex(vector<int>& citations) {
    int ans = 0, n = citations.size();
    sort(citations.begin(), citations.end());
    for(int i = n - 1; i >= 0; --i){
        if(citations[i] >= n - i){
            ans = n - i;
        }else{
            break;
        }
    }
    
    return ans;
}