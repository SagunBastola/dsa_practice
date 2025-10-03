#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        int piv=-1;
        for(i;i>0;i++)
        {
            if(nums[i]<nums[i+1])
            {
                piv=i;
                break;
            }
        }
        if(piv==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        int j=nums.size()-1;
        while(j>piv)
        {
            if(nums[j]>nums[piv])
            {
                swap(nums[j],nums[piv]);
                break;
            }
        }
        reverse(nums.begin()+piv+1,nums.end());
    }
};