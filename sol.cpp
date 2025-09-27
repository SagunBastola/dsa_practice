#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans;
        sort(nums.begin(),nums.end());
        long long int sum=0;
        ans=nums[0]+nums[1]+nums[2];
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                sum=nums[i]+nums[j]+nums[k];
                if(abs(target-ans)>abs(target-sum))
                {
                    
                    ans=sum;
                }
                if(sum==target)
                {
                    return target;
                }
                else if((target-sum)<0)
                {
                    k--;
                }
                else
                {
                    j++;
                }

            }
        }
        return ans;
    }
};
int main()
{
    Solution s1;
    vector<int> vec={-84,92,26,19,-7,9,42,-51,8,30,-100,-13,-38};
    cout<<s1.threeSumClosest(vec,78);
    return 0;

}