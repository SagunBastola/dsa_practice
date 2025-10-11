#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
class Solution
{
public:
    int combinationSum4(vector<int> &nums, int target)
    {
        vector<int> memo(target + 1, -1);
        return helper(nums, target, memo);
    }

    int helper(const vector<int> &nums, int target, vector<int> &memo)
    {
        if (target == 0)
            return 1;
        if (memo[target] != -1)
            return memo[target];

        int sum = 0;
        for (int num : nums)
        {
            if (num <= target)
            {
                sum += helper(nums, target - num, memo);
            }
        }
        memo[target] = sum;
        return sum;
    }
};
