#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int mn=a[0];
        int common_gcd = a[1] - a[0];

        for (int i = 2; i < n; i++)
        {
            common_gcd = gcd(common_gcd, a[i] - a[i - 1]);
        }
        common_gcd=max(mn,common_gcd);
        cout << common_gcd << endl;
    }

    return 0;
}
