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
        vector<int> ans(n, 0);
        int m=vec[n-1];
        for(int i=n-1;i>=0;i--)
        {
            m=max(vec[i],m);
            if(m <= 0)
            {
                ans[i]=0;
            }
            else if(m>0)
            {
                m--;
                ans[i]=1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}