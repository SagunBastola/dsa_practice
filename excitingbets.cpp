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
        cin>>a>>b;
        if(a== b)
        {
            cout<<0<<" "<<0<<endl;
            continue;
        }
        long long int g=abs(a-b);
        long long int m=min(a%g,g-a%g);
        cout<<g<<" "<<m<<endl;

    }
}