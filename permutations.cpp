#include<iostream>
#include<vector>
using namespace std;
void permutation(vector<int>& arr,vector<vector<int>>& ans,int idx)
{
    if(idx==arr.size())
    {
        ans.push_back(arr);
        for(int val:arr)
        {
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=idx;i<arr.size();i++)
    {
        swap(arr[idx],arr[i]);
        permutation(arr,ans,i+1);
        swap(arr[idx],arr[i]);
    }
}
int main()
{
    vector<int> vec={1,2,3};
    vector<vector<int>> ans;
    permutation(vec,ans,0);
    return 0;
}
