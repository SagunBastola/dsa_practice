#include<iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> solution(vector<int>& nums)
{
    stack<int> s;
    int n=nums.size();
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty() || nums[i]>s.top())
        {
            s.push(nums[i]);
        }
    }
    vector<int> ans;
    while(s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}