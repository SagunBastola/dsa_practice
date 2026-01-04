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
        int neg=0;
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]<0)
            {
                neg++;
                vec[i]=-vec[i];
            }
            sum+=(1ll)*vec[i];
        }
        sort(vec.begin(),vec.end());
        if(neg % 2 != 0)
        {
            sum-=2*vec[0];
        }
        cout<<sum<<endl;
    }
}