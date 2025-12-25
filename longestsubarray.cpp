#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestSubarray(vector<int> nums, int k)
    {
        int right = 0;
        int left = 0;
        int n = nums.size();
        int maxlength = 0;
        int sum = nums[0];
        while (right < n)
        {
            if (sum > k)
            {
                sum -= nums[left];
                left++;
            }
            if (sum == k)
            {
                maxlength = max(maxlength, right - left + 1);
            }
            right++;
            if (right >= n)
                break;
            sum += nums[right];
        }
        return maxlength;
    }
};
int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    // Creating an object of Solution class
    Solution sol;

    /* Function call to find the length
    of longest subarray having sum k */
    int ans = sol.longestSubarray(nums, k);

    cout << "The length of longest subarray having sum k is: " << ans;

    return 0;
}