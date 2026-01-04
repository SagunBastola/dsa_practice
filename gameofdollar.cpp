#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a;
    cin>>a;
    float ans=0.0;
    while(a>=1)
    {
        ans+=1/a;
        a=a-1;
    }
    cout << fixed << setprecision(6) << ans << endl;
}