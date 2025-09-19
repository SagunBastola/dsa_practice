#include<iostream>
using namespace std;
int search()
{
    int arr[]={-1,0,4,5,6,9,10};
    int target=6;
    int start=0;
    int end=sizeof(arr)/sizeof(int);
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]>target)
        {
            end=mid-1;
        }
        else if(arr[mid]<target)
        {
            start=mid+1;
        }
        else if(arr[mid]==target)
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    cout<<search();
    return 0;
}