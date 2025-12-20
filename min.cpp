using namespace std;
#include <vector>
#include <unordered_set>
#include <iostream>
class Solution
{
public:
    void helper(vector<int> nums, int i, int &count)
    {
        
        if(nums.size() <= i)
        {
            return;
        }
        unordered_set<int> uniqueset(nums.begin()+i,nums.end());
        if(uniqueset.size() == nums.size()-i)
        {
            return ;
        }
        count++;
        helper(nums, i + 3, count);
    }
    bool isunique(vector<int> &nums, int i)
    {
        unordered_set<int> s;
        for (int a = i; a < nums.size(); a++)
        {
            if (s.find(nums[a]) != s.end())
            {
                return false;
            }
            s.insert(nums[a]);
            
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        unordered_set<int> uniqueset(nums.begin(), nums.end());
        if (uniqueset.size() == nums.size()) {
            return 0;
        }
        if (nums.size() < 3) {
            return 1;
        }
        int i=3;
        int count = 1;
        while (i<nums.size()) {
            if (nums.size() <= i) {
                break;
            }
            unordered_set<int> uniqueset(nums.begin() + i, nums.end());
            if (uniqueset.size() == nums.size() - i) {
                break;
            }
            count++;
            i=i+3;
        }
        return count;
    }
};
int main()
{
    vector<int> vec={4,3,5,1,2};
    Solution s;
    cout<<(s.minOperations(vec));
    return 0;
}