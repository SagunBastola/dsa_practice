#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        if (n == 1)
        {
            cout << vec[0] << endl;
            continue;
        }
        if (n == 2)
        {
            cout << vec[1] - vec[0] << endl;
            continue;
        }
        long long sum = 0;
        for (int i = 0; i < n - 2; i++)
        {
            sum += (1ll) * vec[i];
        }
        long long result = static_cast<long long>(vec[n - 1]) - (vec[n - 2] - sum);

        cout << result << endl;
    }
}