#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '1')
            {
                continue;
            }
            if (i == 0)
            {
                sum += vec[i];
                continue;
            }
            if(s[i-1] != '1')
            {
                int a=i;
                while(i<n && s[i] == '1')
                {
                    if(vec[i]<vec[a-1])
                    {
                        sum+=vec[a-1];
                        s[i]='0';
                        break;
                    }
                    else{
                        sum+=vec[i];
                        i++;
                    }
                }
                
            }
            else{
                sum+=vec[i];
            }
        }
        cout<<sum<<endl;
    }
}