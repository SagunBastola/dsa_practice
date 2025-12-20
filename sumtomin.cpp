#include <iostream>
#include <vector>
#include <algorithm>
#include<cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        vector<int> vec;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
        }
        for (int i = 1; i < n; i++)
        {
            
            if (vec[i] == -1)
            {
                vec[i] = vec[i - 1];
            }
            
        }
        for (int i = n - 2; i < n; i++)
        {
            if (vec[i] == -1)
            {
                vec[i] = vec[i + 1];
            }
        }
        int sub_sum=0;
        for(int i=1;i<n;i++)
        {
            sub_sum+=(vec[i]-vec[i-1]);
        }
        cout<<abs(sub_sum)<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}