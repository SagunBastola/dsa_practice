#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int longestSubarray(vector<int> nums, int k)
    {
        
        int len=0;
        int s=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {   s=0;
            for(int j=i;j<n;j++)
            {
                s+=nums[j];
                if(s==k)
                {
                    len=max(len,j-i+1);
                }
            }
        }
        return len;
    }
};
int main()
{
    vector<int> nums = {1,-1,1};
    int k = 1;

    // Creating an object of Solution class
    Solution sol;

    /* Function call to find the length
    of longest subarray having sum k */
    int ans = sol.longestSubarray(nums, k);

    cout << "The length of longest subarray having sum k is: " << ans;

    return 0;
}