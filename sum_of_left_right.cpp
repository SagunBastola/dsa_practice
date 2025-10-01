#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<set>
using namespace std;
#include <cstdlib> 

#include <climits>
#include <cmath>

class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return -1;

        vector<long long> prefix_sum(n, 0);
        prefix_sum[0] = nums[0];
        for (int i = 1; i < n; i++)
            prefix_sum[i] = prefix_sum[i - 1] + nums[i];

        long long total_sum = prefix_sum[n - 1];
        long long ans = LLONG_MAX;
        bool found = false;

        for (int i = 0; i < n - 1; i++) { 
            if (isStrictlyIncreasing(nums, 0, i) && isStrictlyDecreasing(nums, i + 1, n - 1)) {
                long long left_sum = prefix_sum[i];
                long long right_sum = total_sum - left_sum;
                ans = min(ans, abs(left_sum - right_sum));
                found = true;
            }
        }

        return found ? ans : -1;
    }

private:
    bool isStrictlyIncreasing(vector<int>& nums, int start, int end) {
        for (int i = start; i < end; i++) {
            if (nums[i] >= nums[i + 1]) return false;
        }
        return true;
    }

    bool isStrictlyDecreasing(vector<int>& nums, int start, int end) {
        for (int i = start; i < end; i++) {
            if (nums[i] <= nums[i + 1]) return false;
        }
        return true;
    }
};