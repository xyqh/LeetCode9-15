#include "LeetCodeBase.h"

vector<int> twoSum(vector<int>& numbers, int target){
    int index1 = 0, index2 = numbers.size() - 1;
    while(index1 < index2){
        if(numbers[index1] == target - numbers[index2]){
            return {index1 + 1, index2 + 1};
        }else if(numbers[index1] < target - numbers[index2]){
            ++index1;
        }else{
            --index2;
        }
    }

    return {};
}