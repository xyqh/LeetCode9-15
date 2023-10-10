#include "LeetCodeBase.h"

int getHappyNum(int n){
    int sum = 0;
    while(n > 0){
        sum += pow(n % 10, 2);
        n /= 10;
    }
    return sum;
}

bool isHappy(int n){
    unordered_map<int, int> hash;
    while(n != 1){
        if(hash.count(n)){
            return false;
        }
        hash[n] = 1;
        n = getHappyNum(n);
    }

    return true;
}