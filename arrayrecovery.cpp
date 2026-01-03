#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        vector<int> ans(n);
        ans[0]=vec[0];
        int sum=0;
        int t=false;
        for(int i=1;i<n;i++)
        {  
            if(ans[i-1]>=vec[i] && vec[i] != 0)
            {
                t=true;
                cout<<-1<<endl;
                break;
            }
            ans[i]=vec[i]+ans[i-1];
        }
        if(!t)
        {
            for(int i=0;i<n;i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
}