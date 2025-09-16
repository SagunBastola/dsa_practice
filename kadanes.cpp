#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,-1,2,-8,5,5,3};
    int size=sizeof(arr)/sizeof(int);
    int cursum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<size;i++)
    {
        cursum+=arr[i];
        maxsum=max(cursum,maxsum);
        if(cursum<0)
        {
            cursum=0;
        }
        
    }
    cout<<maxsum<<endl;
    return 0;
}