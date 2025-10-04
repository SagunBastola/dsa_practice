#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> ans;
        checker(nums, 0, ans, vec);
        return vec;
    }

    void checker(vector<int>& nums, int i, vector<int>& ans, vector<vector<int>>& vec)
    {
        if (i == nums.size()) {
            vec.push_back(ans);
            return;
        }

        // Include nums[i]
        ans.push_back(nums[i]);
        checker(nums, i + 1, ans, vec);

        // Exclude nums[i]
        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1])
        {
            idx++;
        }
        checker(nums, idx, ans, vec);
    }
};

int main() {
    vector<int> nums = {1,2,2};
    Solution s1;
    vector<vector<int>> val = s1.subsets(nums);

    for (int i = 0; i < val.size(); i++) {
        for (int j = 0; j < val[i].size(); j++) {
            cout << val[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
