#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b != 0)
    {
        return gcd(b,a%b);
    }
    return a;
}
int main()
{
    int b;
    cin>>b;
    int a;
    cin>>a;
    cout<<gcd(a,b);
}