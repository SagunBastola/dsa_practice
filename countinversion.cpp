#include<iostream>
#include<vector>
using namespace std;
int merge(vector<int>& arr,int start,int end, int mid)
{
    vector<int> temp;
    int i=start;
    int j=mid+1;
    int inv_count=0;
    while(i<=mid && j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            inv_count+=mid-i+1;
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int k = 0; k < temp.size(); k++) {
        arr[start + k] = temp[k];
    }
    return inv_count;
}
int ms(vector<int>& arr,int start,int end)
{
    if(start<end)
    {
        int mid=start+(end-start)/2;
        int leftcount=ms(arr,start,mid);
        int rightcount=ms(arr,mid+1,end);
        int inv_count=merge(arr,start,end,mid);
        return leftcount+rightcount+inv_count;
        
    }
    return 0;
    
}
int main()
{
    vector<int> arr={6,3,5,2,7};
    cout<<ms(arr,0,arr.size()-1);
    return 0;
}