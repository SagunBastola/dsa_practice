#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr={-1,0,1,2,-1,-4};
    int n=arr.size();
    set<set<int>> s;
    vector<vector<int>> vec;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {   if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            if(arr[i]+arr[j]+arr[k]==0)
            {
                vec.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
                while(arr[j]==arr[j-1])
                {
                    j++;
                }
            }
            if(arr[i]+arr[j]+arr[k]<0)
            {
                j++;
            }
            if(arr[i]+arr[j]+arr[k]>0)
            {
                k--;
            }

        }
    }
    for(auto val : vec)
    {
        for(int v : val)
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;

}
