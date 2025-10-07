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
        int largest = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            largest = max(nums[i], largest);
        }

        set<int> s(nums.begin(), nums.end());
        int smallest = 1;
        for (int x : s)
        {
            if (x > 0)
            {
                if (smallest == x)
                    smallest += 1;
            }
        }

        return smallest;
    }
};

int main()
{
    return 0;
}