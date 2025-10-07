#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] <= 0 || nums[i] > n)
            {
                nums[i] = n + 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int num = abs(nums[i]);
            if (num > 0 && num <= n)
            {
                if (nums[num - 1] > 0)
                {
                    nums[num - 1] = -abs(nums[num - 1]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                return i + 1;
            }
        }
        return n + 1;
    }

};
int main()
{
    return 0;
}
