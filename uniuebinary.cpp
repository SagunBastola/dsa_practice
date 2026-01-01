#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void generate(int n, vector<string>& ans, string curr) {
        if (curr.size() >= n) {
            ans.push_back(curr);
            return;
        }
        generate(n, ans, curr + '0');
        generate(n, ans, curr + '1');
        
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].size();
        vector<string> ans;
        string s="";
        generate(n,ans, s);
        bool found;
        for (int i = 0; i < ans.size(); i++) {
            found = false;
            for (int j = 0; j < nums.size(); j++) {
                
                if (nums[j] == ans[i]) {
                    found = true;
                }
            }
            if (!found) {
                return ans[i];
            }
        }
        return ans[0];
    }
};