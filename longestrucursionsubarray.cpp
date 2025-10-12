#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int longestSubarray(vector<long int> &nums)
    {
        if (nums.size() == 0)
        {
            return 0;
        }
        if (nums.size() == 2)
        {
            return 2;
        }
        if (nums.size() == 1)
        {
            return 1;
        }
        int ans = 2;
        int cap=2;
        for (int i = 2; i < nums.size(); i++)   
        {
            if(nums[i-2]+nums[i-1]==nums[i])
            {
                cap++;
            }
            else
            {
                ans=max(cap,ans);
                cap=2;
            }
        }
        ans=max(cap,ans);
        return ans;
    }
};
int main()
{
    vector<long int> a={1000000000,1000000000,1000000000};
    Solution s1;

    cout<<s1.longestSubarray(a);
    return 0;
}