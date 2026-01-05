#include<bits/stdc++.h>
using namespace std;
bool isfair(long long n)
{
    string s=to_string(n);
    int a=s.size();
    for(int i=0;i<a;i++)
    {
        int b=s[i]-'0';
        if(b!=0 && n%b != 0)
        {
            return false;
        }
    }
    return true;
}
long long int findfair(long long int n)
{
    while(!isfair(n))
    {
        n++;
    }
    return n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        cout<<findfair(n)<<endl;
    }
}