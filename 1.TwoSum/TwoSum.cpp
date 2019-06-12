#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        vector<int> tmp = nums
        for (i : tmp.len())
    }
};

int* twoSum(int* nums, int numsSize, int target) {
    int* ret = malloc(2*sizeof(int));
    
    int maxPosi, minNega, size;
    for (int i=0; i<numsSize; i++) {
        if (nums[i]<0 && nums[i]<minNega) minNega = nums[i];
        if (nums[i]>=0 && nums[i]>maxPosi) maxPosi = nums[i];
    }
    size = ((maxPosi+minNega)<0) ? (-minNega) : maxPosi;
    int* posiA = malloc(size*sizeof(int));
    int* negaA = malloc(size*sizeof(int));
    
    for (int i=0; i<numsSize; i++)
    {
        if(nums[i]<=target)
        {
            if(posiA[target-nums[i]] > 0) {
                ret[0] = posiA[target-nums[i]]-1;
                ret[1] = i;
            }
        } 
        else
        {
            if(negaA[nums[i]-target] > 0) {
                ret[0] = negaA[nums[i]-target]-1;
                ret[1] = i;
            }
        }
        if(nums[i]<0)
        {
            negaA[-nums[i]] = i+1;
        }
        else
        {
            posiA[nums[i]] = i+1;
        }
    }
    return ret;
}