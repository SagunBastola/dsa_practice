#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<set>
using namespace std;

class Solution
{
public:
    void helper(vector<int> &candidates, int sum, int target, vector<vector<int>> &ans, vector<int> &arr,int idx)
    {
        if (sum == target)
        {
            ans.push_back(arr);
            return;
        }
        if (sum > target)
        {
            return;
        }
        for (int i = idx; i < candidates.size(); i++)
        {
            arr.push_back(candidates[i]);
            helper(candidates, sum+candidates[i], target, ans, arr,i);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> arr;
        helper(candidates, 0, target, ans, arr,0);
        return ans;
    }
};