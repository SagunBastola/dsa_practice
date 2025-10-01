#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<set>
using namespace std;

class Solution {
public:
    bool palindrome(string s)
    {
        int start=0;
        int end=s.size()-1;
        while(start<end)
        {
            if(s[start]!=s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void helper(string s,vector<vector<string>>& ans,vector<string>& partitions)
    {
        if(s.size()==0)
        {
            ans.push_back(partitions);
        }
        for(int i=0;i<s.size();i++)
        {
            string part=s.substr(0,i+1);
            if(palindrome(part))
            {
                partitions.push_back(part);
                helper(s.substr(i+1),ans,partitions);
                partitions.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partitions;
        helper(s,ans,partitions);
        return ans;
        
    }
};