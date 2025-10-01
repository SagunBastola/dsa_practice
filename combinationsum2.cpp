#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<set>
using namespace std;

class Solution {
public:
    void helper(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &arr, int idx) {
        if (target == 0) {
            ans.push_back(arr);
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            if (i > idx && candidates[i] == candidates[i - 1]) continue;

            if (candidates[i] > target) break;

            arr.push_back(candidates[i]);
            helper(candidates, target - candidates[i], ans, arr, i + 1);
            arr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        sort(candidates.begin(), candidates.end()); // sorting is essential
        helper(candidates, target, ans, arr, 0);
        return ans;
    }
};
