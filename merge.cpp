#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums,int start,int end,int mid)
    {   vector<int> temp;
        int i=start;
        int j=mid+1;
        while(i<=mid && j<=end)
        {
            if(nums[i]<=nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i<=mid)
        {
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=end)
        {
            temp.push_back(nums[j]);
        }
        for(int idx=0;i<temp.size();i++)
        {
            nums[start+idx]=temp[idx];
        }
    }
    void mergesort(vector<int>& nums,int start,int end)
    {
        while(start<end)
        {
            int mid=start+(end-start)/2;
            mergesort(nums,start,mid);
            mergesort(nums,mid+1,end);
            merge(nums,start,end,mid);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};