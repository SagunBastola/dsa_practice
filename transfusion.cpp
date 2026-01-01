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
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            total += vec[i];
        }
        if (total % n != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        int target = total / n;
        int oddsum = 0;
        int evensum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                oddsum += vec[i];
            }
            else
            {
                evensum += vec[i];
            }
        }
        int oddcount = (n + 1) / 2;
        int evencount = n / 2;
        if (oddsum == target * oddcount && evensum == target * evencount)
        {
            cout << "YES" << endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}