#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minLength(vector<int> &nums, int k)
    {
        int length = INT_MAX;
        int start = 0;
        int sum = nums[0];
        int n = nums.size();
        if (sum == k)
        {
            length = 1;
        }
        for (int i = 1; i < n; i++)
        {
            sum += nums[i];
            if (sum == k)
            {
                length = min(length, i - start);
            }
            while (sum < k)
            {
                sum -= nums[start];
                start++;
            }
        }
        if (sum == k)
        {
            length = min(length, n  - start);
        }
        if (length == INT_MAX)
        {
            return -1;
        }
        return length;
    }
};
int main()
{
    Solution s1;
    vector<int> vec = {2, 2, 3, 1};
    cout << s1.minLength(vec, 4);
}