#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int k;
        cin>>n;
        cin>>k;
        vector<pair<int,int>> vec(n);
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            vec[i]={a,i};
        }
        
        vector<int> real(n);
        for(int i=0;i<n;i++)
        {
            cin>>real[i];
        }
        sort(real.begin(),real.end());
        
        sort(vec.begin(),vec.end());
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[vec[i].second]=real[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}