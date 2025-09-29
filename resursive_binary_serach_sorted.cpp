#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0;
        int end=nums.size()-1;
        return helper(nums,target,st,end);
    }
    int helper(vector<int> & arr,int target,int st,int end)
    {
        if(st>end) return -1;
        int mid=st+(end-st)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            return helper(arr,target,mid+1,end);
        }
        else
        {
            return helper(arr,target,st,end-1);
        }
    }
};