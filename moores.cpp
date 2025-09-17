#include<iostream>
using namespace std;
int main()
{
    int nums[] = {3,2,3};
    int size=sizeof(nums)/sizeof(int);
    int freq=0;
    int ans=0;
    for(int i=0;i<size;i++)
    {
        if(freq==0)
        {
            ans=nums[i];
        }
        if(ans==nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout<<"freq"<<"value"<<ans;
    return 0;
}