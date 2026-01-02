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
        for (int i = 0; i < n; i++)
        {
            int minn=i;
            int prev=vec[i];
            for (int j = i; j < n; j++)
            {
                if (vec[i] > vec[j] && ((vec[i] % 2 != vec[j] % 2) || (prev%2 != vec[j]%2)))
                {
                    
                    swap(vec[i],vec[j]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}