#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, a, b;
        cin >> l;
        cin >> a;
        cin >> b;
        int ans = 0;
        for (int i = 0; i < l/b; i++)
        {
            ans = max(ans, (a + b * (i + 1)) % l);
        }

        cout << ans << endl;
    }
}