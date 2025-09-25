#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<2)
        {
            return 0;
        }
        int i=0;
        int max=INT_MIN;
        while(i<nums.size()-1)
        {
            if(max<(nums[i+1]-nums[i]))
            {
                max=nums[i+1]-nums[i];
            }
            i++;
        }
        return max;
    }
};