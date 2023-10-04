#include "LeetCodeBase.h"

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int n = gas.size();
    int i = 0;
    while(i < n){
        int totalGas = 0, totalCost = 0;
        int cnt = 0;
        while(cnt < n){
            int j = (i + cnt) % n;
            totalGas += gas[j];
            totalCost += cost[j];
            if(totalGas < totalCost){
                break;
            }
            ++cnt;
        }

        if(cnt == n) return i;
        i += cnt + 1;
    }

    return -1;
}