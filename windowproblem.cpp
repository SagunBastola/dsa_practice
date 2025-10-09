#include<vector>
#include<iostream>
using namespace std;
#include<deque>
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> q;
        for(int i=0;i<k;i++)
        {
            while(q.size()>0 && nums[q.back()]<=nums[i])
            {
                q.pop_back();
            }
            q.push_back(i);
        }
        for(int i=k;i<nums.size();i++)
        {
            ans.push_back(nums[q.front()]);
            while(q.front()<= i-k && q.size())
            {
                q.pop_front();
            }
            while(q.size()>0 && nums[q.back()]<=nums[i])
            {
                q.pop_back();
            }
            q.push_back(i);
            
        }
        ans.push_back(nums[q.front()]);
        return ans;
    }
};
int main()
{
    return 0;
}