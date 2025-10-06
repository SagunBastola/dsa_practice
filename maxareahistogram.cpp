#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int n=heights.size();
        vector<int> right(n,-1);
        vector<int> left(n,-1);
        for(int i=n-1;i>=0 ;i--)
        {
            while(s.size()>0 && heights[s.top()]>=heights[i])
            {
                s.pop();
            }
            right[i]=s.empty() ? n : s.top();
            s.push(i);
        }
        while(!s.empty())
        {
            s.pop();
        }
        for(int i=0;i<n ;i++)
        {
            while(s.size()>0 && heights[s.top()]>=heights[i])
            {
                s.pop();
            }
            left[i]=s.empty() ? -1 : s.top();
            s.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int width=right[i]-left[i]-1;
            int area=heights[i]*width;
            ans=max(ans,area);
        }
        return ans;
    }
};