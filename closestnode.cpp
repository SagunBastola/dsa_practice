#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
   int val;
  TreeNode *left;
   TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void helper(TreeNode* root,vector<int>& ans)
    {
        if(root == NULL)
        {
            return;
        }
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int> ans;
        helper(root,ans);
        vector<vector<int>> result;
        
        for(int i=0,j=0;i<ans.size() && j<queries.size();i++)
        {
            if(ans[i] == queries[j])
            {
                result.push_back({ans[i],ans[i]});
                j++;
            }
            else if(i>0 && ans[i-1]<queries[j] && ans[i]>queries[j])
            {
                result.push_back({ans[i-1],ans[i]});
                j++;
            }
        }
        return result;
    }
};