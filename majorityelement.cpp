#include<iostream>
// 169. Majority Element
// Easy
// Topics]
// premium lock icon
// Companies
// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

// Example 1:

// Input: nums = [3,2,3
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
using namespace std;
int main()
{
    int nums[] = {3,2,3};
    int size=sizeof(nums)/sizeof(int);
    for(int i=0;i<size;i++)
    {
        int count=0;
        for(int j=0;j<size;j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
        }
        if(count>size/2)
        {
            cout<<"found"<<endl<<nums[i];
        }
    }
}