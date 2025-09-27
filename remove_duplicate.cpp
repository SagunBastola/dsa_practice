#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx=1;
        int ans=nums[0];
        int k=1;
        if(nums.size()==0)
        {
            return 0;
        }
        if(nums.size()==1)
        {
            return 1;
        }
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==ans)
            {
                continue;
            }
            else
            {
                k++;
                nums[idx++]=nums[i];
                ans=nums[i];
            }
            
        }
        return k;
    }
};