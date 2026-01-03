#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        vector<int> even;
        vector<int> odd;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i] %2 ==0)
            {
                even.push_back(vec[i]);
            }
            else
            {
                odd.push_back(vec[i]);
            }
        }
    }
}