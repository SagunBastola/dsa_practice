#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,-1,2,-8,5,5,3};
    int size=sizeof(arr)/sizeof(int);
    int maxsum=INT_MIN;
    for(int start=0;start<size;start++)
    {
        int cur=0;
        for(int end=start;end<size;end++)
        {
         cur+=arr[end];
         maxsum=max(cur,maxsum);   
        }
    }
    cout<<maxsum;
    return 0;
}