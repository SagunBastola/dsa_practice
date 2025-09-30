#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size=nums.size();
        int piv=-1;
        int i=size-2;
        while(i>=0)
        {
            if(nums[i]<nums[i+1])
            {
                piv=i;
                break;
            }
            i--;
        }
        if(piv==-1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int j=size-1;j>piv;j--)
        {
            if(nums[j]>nums[piv])
            {
                swap(nums[j], nums[piv]);
                break;
            }
        }
        reverse(nums.begin() + piv + 1, nums.end());
    }
};