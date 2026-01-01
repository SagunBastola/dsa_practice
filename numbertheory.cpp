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
        int min1=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            min1=min(vec[i],min1);
        }
        int diff;
        int mindiff=INT_MAX;
        for(int i=0;i<n;i++)
        {
            diff=vec[i]-min1;
            if(diff != 0){
            mindiff=min(mindiff,diff);}
            if(diff<min1 && diff != 0)
            {
                mindiff=min1;
                break;
            }
        }
        cout<<mindiff<<endl;
    }
}