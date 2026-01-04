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
        vector<long long int> vec(n);
        long long int g=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            g=__gcd(g,vec[i]);
        }
        bool a=false;
        for(long long int i=2;i<=2*g;i++)
        {
            if(__gcd(g,i) == 1)
            {   a=true;
                cout<<i<<endl;
                break;
            }
        }
        if(!a)
        {
            cout<<-1<<endl;
        }
    }
}