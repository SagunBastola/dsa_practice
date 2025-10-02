#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<unordered_map>
using namespace std;
int partitions(vector<int>& arr,int start,int end)
{
    int idx=start-1;
    int pivot=arr[end];
    for(int i=start;i<end;i++)
    {
        if(arr[i]<=pivot)
        {
            idx++;
            swap(arr[idx],arr[i]);
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
        int pividx=partitions(arr,start,end);
        quicksort(arr,start,pividx-1);
        quicksort(arr,pividx+1,end);
    }
}

int main()
{
    vector<int> arr={5,6,4,9,7,10};
    int size=arr.size();
    quicksort(arr,0,size-1);
    for(int val : arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}