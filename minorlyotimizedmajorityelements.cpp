#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums[] = {3,2,3};
    int size=sizeof(nums)/sizeof(int);
    sort(nums,nums+size);
    int freq=1;
    int ans=nums[0];
    for(int i=1;i<size;i++)
    {
        if(nums[i]==nums[i-1])
        {
            freq++;
            if(freq>size/2)
            {
                cout<<ans<<endl;
                return 0;
            }
        }
        else{
            freq=1;
            ans=nums[i];
        }
    }
    return 0;
}