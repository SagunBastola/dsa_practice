#include<bits/stdc++.h>
using namespace std;
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
        for(int i=0;i<n;i++)
        {   
            cin>>vec[i];
        }
        sort(vec.begin()+1,vec.end());
        int height=vec[0];
        for(int i=1;i<n;i++)
        {
            if(height<vec[i])
            {
                height+=(vec[i]-height+1)/2;
            }
        }
        cout<<height<<endl;   
    }
}