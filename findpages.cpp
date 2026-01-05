#include<bits/stdc++.h>
using namespace std;
bool can(int arr[],int n,int high,int k)
{
    int count=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(high<arr[i])
        {
            return false;
        }
        if(sum+arr[i]<=high)
        {
            sum+=arr[i];
        }
        else
        {
            sum=arr[i];
            count++;
        }
        
    }
    if(k>=count)
    {
        return true;
    }
}
int findPages(int arr[], int n, int k) {
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int start=0;
    int end=sum;
    int ans=0;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(can(arr,n,mid,k))
        {
            end=mid-1;
            ans=min(ans,mid);
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
    
}