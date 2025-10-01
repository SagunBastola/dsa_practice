class Solution {
public:
    void helper(vector<int>& candidates,int sum,int target,vector<vector<int>>& ans,vector<int>& arr)
    {
        if(sum==target)
        {
            ans.push_back(arr)
            return;
        }
        if(sum>target)
        {
            return;
        }
        for(int i=0;i<candidates.size(),i++)
        {
            sum+=candidates[i];
            arr.push_back(candidates[i]);
            helper(candidates,sum,target,ans,arr);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> arr;
        helper(candidates,0,target,ans,arr);
        rerturn ans;
    }
};