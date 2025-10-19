#include <iostream>
#include <map>
#include <queue>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int smallest=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]%k==0)
                {
                    int multiple=nums[i]/k;
                    if(multiple==smallest)
                    {
                        smallest+=1;
                    }
                }
            }
        return smallest*k;
    }
};
int main()
{
    vector<int> arr={1,5,4,2,6,8,7};
    Solution s1;
    cout<<s1.missingMultiple(arr,2);
    return 0;
}