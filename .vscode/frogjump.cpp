#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int solve(int n, vector<int>& height, vector<int>& dp)
    {
        if (n <= 0)
        {
            return 0;
        }
        if (dp[n] != -1)
        {
            return dp[n];
        }
        int left = solve(n - 1, height, dp) + abs(height[n] - height[n - 1]);
        int right = INT_MAX;
        if (n > 1)
        {
            right = solve(n - 2, height, dp) + abs(height[n] - height[n - 2]);
        }
        dp[n] = min(left, right);
        return dp[n];
    }
    int frogJump(vector<int> height)
    {
        int n = height.size();
        vector<int> dp(n, -1);
        return solve(n - 1, height, dp);
    }
};
int main()
{
    // Define the heights array
    vector<int> height{30, 10, 60, 10, 60, 50};

    // Create Solution instance
    Solution sol;

    // Compute and print the minimum energy
    cout << sol.frogJump(height) << endl; // Expected: 40

    return 0;
}