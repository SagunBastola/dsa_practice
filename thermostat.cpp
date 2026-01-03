#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,x,a,b;
        cin>>l>>r>>x;
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
            continue;
        }
        if(abs(a-b)>=x)
        {
            cout<<1<<endl;
            continue;
        }
        if(abs(l-r)<=x)
        {
            cout<<-1<<endl;
            continue;
        }
    }
}