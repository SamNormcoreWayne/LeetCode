# Notes for #1 2 Sums

1. O(n^2) method:

    2 for loops to traverse all data

2. O(n) method:

    ```c++
        class Solution {
        public:
            vector<int> twoSum(vector<int>&nums, int target)
            {
                unordered_map<int, int> dic;
                vector<int> r;
                int n = nums.size();
                for (int i = 0; i < n; ++i)
                {
                    /*
                     * Why put dic[target - nums[i]] = i
                     * at the end of this for loop?
                     * for example [3, 3]
                     * for every 2 elements, I just want this line run 1 once.
                     * if not, 1st loop dic[3] = 0
                     * then run if, 3 in 2ed will equals to 0 which is wrong!!!
                     * BTW, dic[target - nums[i]] stands for the index of nums[i]
                     * and vice versa dic[nums[i]] stands for the index of target - nums[i]
                     */
                    if (dic.count(nums[i]))
                    {
                        r.push_back(dic[nums[i]]);
                        r.push_back(i);
                        return r;
                    }
                    dic[target - nums[i]] = i;
                }
                return r;
            }
        };
    ```

3. I donot think this question will have a O(logn) method for all data is disordered.