#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    int count=0;
    int left=0;
    int right=n-1;
    while(left <= right)
    {
        int sum=0;
        int high=vec[right];
        sum=high;
        right--;
        while(left<=right && sum<=d)
        {
            sum+=high;
            left++;
        }
        if(sum>d){
        count++;}
    }
    cout<<count<<endl;
}