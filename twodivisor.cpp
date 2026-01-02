#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a;
        long long int b;
        cin >> a;
        cin >> b;
        if(b%a!=0)
        {
            long long g=__gcd(a,b);
            long long x=(a/g)*b;
            cout<<x<<endl;
        }
        else
        {
            long long mul=b/a;
            long long x=b*mul;
            cout<<x<<endl;
        }
    }
}