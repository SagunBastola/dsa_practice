#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    void helper(vector<vector<int>>& ans,vector<int> one,int n,int k,int idx)
    {
        if(one.size()==k)
        {
            ans.push_back(one);
            return;
        }
        for(int i=idx;i<=n;i++)
        {
            one.push_back(i);
            helper(ans,one,n,k,idx+1);
            one.pop_back();

        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> one;
        helper(ans,one,n,k,1);
        return ans;
    }
};