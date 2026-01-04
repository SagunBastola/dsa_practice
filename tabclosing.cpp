#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a;
        long long int b;
        long long int n;
        cin>>a>>b>>n;
        if((long long )b*n <=(long long )a || b==a)
        {
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
}