#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> ans;
        checker(nums,0,ans,vec);
        return vec;
    }
    void checker(vector<int>& nums,int i,vector<int>& ans,vector<vector<int>>& vec)
    {
        if(i==nums.size())
        {
            vec.push_back(ans);
            return;
        }

        ans.push_back(nums[i]);
        checker(nums,i+1,ans,vec);

        ans.pop_back();
        checker(nums,i+1,ans,vec);


    }

};
int main()
{
    cout<<"he";
    return 0;
}