#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main()
{
    int arr[]={-1,0,1,2,-1,-4};
    int n=sizeof(arr)/sizeof(int);
    set<set<int>> s;
    vector<vector<int>> vec;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==0)
                {
                    set<int> a;
                    a.insert(arr[i]);
                    a.insert(arr[j]);
                    a.insert(arr[k]);
                    if(s.find(a)==s.end())
                    {
                        s.insert(a);
                        vec.push_back({arr[i],arr[j],arr[k]});
                    }
                    

                }
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