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
    for(int i=0;i<n-1;i++)
    {   
        int tar=-arr[i];
        set<int> g;
        for(int j=i+1;j<n;j++)
        {
            int tofind=tar-arr[j];
            if(g.find(tofind)!=g.end())
            {
                set<int> a;
                    a.insert(arr[i]);
                    a.insert(arr[j]);
                    a.insert(tofind);
                    if(s.find(a)==s.end())
                    {
                        s.insert(a);
                        vec.push_back({arr[i],arr[j],tofind});
                    }
                

            }
            g.insert(arr[j]);
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
}
