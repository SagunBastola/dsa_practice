#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int j=0;j<n;j++)
        {
            
            cin>>vec[j];
        }
        if (n <= 1)
        {
            cout << 0 << endl;
            continue;
        }
        int total=0;
        for(int j=0;j<n-1;j++)
        {
            total+=abs(vec[j+1]-vec[j]);
        }
        int answer;
        answer=total;
        answer=min(answer,total-abs(vec[1]-vec[0]));
        answer=min(answer,total-abs(vec[n-1]-vec[n-2]));
        for(int k=1;k<n-1;k++)
        {
            int toremove=abs(vec[k]-vec[k-1])+abs(vec[k]-vec[k+1]);
            int toadd=abs(vec[k-1]-vec[k+1]);
            answer=min(answer,total-toremove+toadd);
        }
        cout<<answer<<endl;
    }
}