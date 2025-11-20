#include<iostream>
#include<vector>
using namespace std;
int pividx(vector<int>& arr,int start,int end)
{
    int idx=start-1;
    int pivot=arr[end];
    for(int j=start;j<end;j++)
    {
        if(arr[j]<=pivot)
        {
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[idx],arr[end]);
    return idx;
    
}
void quicksort(vector<int>& arr,int start,int end)
{
    if(start<end)
    {
        int pividxnum=pividx(arr,start,end);
        quicksort(arr,start,pividxnum-1);
        quicksort(arr,pividxnum,end);
    }
}
int main()
{
    vector<int> arr={2,11,5,3,1,9};
    quicksort(arr,0,arr.size()-1);
    for(auto a : arr)
    {
        cout<<a<<" ";
    }
    return 0;
}