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
        int min1=INT_MAX;
        int max1=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            min1=min(min1,vec[i]);
            max1=max(max1,vec[i]);
        }
        int val;
        cin>>val;
        if(val>=min1 && val<=max1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}