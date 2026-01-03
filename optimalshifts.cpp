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
        string s;
        cin>>s;
        vector<int> one_pos;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '1')
            {
                one_pos.push_back(i);
            }
        }
        if(one_pos.size() == n)
        {
            cout<<0<<endl;
            continue;
        }
        if(one_pos.size() == 1)
        {
            cout<<n-1<<endl;
            continue;
        }
        int n1=one_pos.size();
        int max1=one_pos[0];
        for(int i=1;i<n1;i++)
        {
            max1=max(one_pos[i]-one_pos[i-1]-1,max1);
        }
        max1=max(max1,n-one_pos[n1-1]-1+one_pos[0]);
        cout<<max1<<endl;
    }
}