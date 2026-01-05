#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long A;
        long long B;
        long long n;
        cin >> A >> B >> n;
        vector<long long> attack(n);
        vector<long long> health(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> attack[i];
        }
        for (long long i = 0; i < n; i++)
        {
            cin >> health[i];
        }
        bool t = false;
        long long max1=0;
        long long total_health = 0;
        for (int i = 0; i < n; i++)
        {
            max1=max(max1,attack[i]);
            if (health[i] % A == 0)
            {
                total_health += (health[i] / A) * attack[i];
            }
            else
            {
                total_health += (health[i] / A + 1) * attack[i];
            }
        }
        if(B+max1 > total_health)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}