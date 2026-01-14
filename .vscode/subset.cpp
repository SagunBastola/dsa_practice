#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int l=1<<n;
        vector<vector<int>> ans;
        for(int i=0;i<l;i++)
        {
            vector<int> a;
            for(int j=0;j<n;j++)
            {
                if(1 & i>>j)
                {
                    a.push_back(nums[j]);
                }
            }
            ans.push_back(a);
        }
        return ans;
    }

};
int main()
{
    vector<int> a={1,2,3};
    Solution s1;
    vector<vector<int>> vect=s1.subsets(a);
    for(auto v : vect)
    {
        for(auto a : v)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }
}