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
        bool odd=false;
        bool even=false;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
            if(vec[i]%2 == 1)
            {
                odd=true;
            }
            if(vec[i]%2 ==0)
            {
                even=true;
            }
        }
        if(odd && even)
        {
            sort(vec.begin(),vec.end());
        }
        
        for (int i = 0; i < n; i++)
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
}