#include "LeetCodeBase.h"

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int curIdx = m + n - 1;
    int curM = m - 1, curN = n - 1;
    while(curIdx >= 0){
        if(curM >= 0 && curN >= 0){
            if(nums1[curM] > nums2[curN]){
                nums1[curIdx] = nums1[curM--];
            }else{
                nums1[curIdx] = nums2[curN--];
            }
        }else if(curM >= 0){
            nums1[curIdx] = nums1[curM--];
        }else{
            nums1[curIdx] = nums2[curN--];
        }

        --curIdx;
    }
}