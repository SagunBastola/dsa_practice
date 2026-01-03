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
        vector<string> vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        string ans="";
        for(int i=0;i<n;i++)
        {
            string option1=ans+vec[i];
            string option2=vec[i]+ans;
            ans=min(option1,option2);
        }
        cout<<ans<<endl;
    }
}