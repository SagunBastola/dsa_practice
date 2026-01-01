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
        int N = 1 << n;
        for (int i = 0; i <N; )
        {
            int len = 1;
            while ((len << 1 )<= N - 1)
            {
                len <<= 1;
            }
            for (int j = i + len - 1; j >= i; --j)
            {
                cout << j << " ";
            }
            i += len;
        }
        cout << endl;
    }
}