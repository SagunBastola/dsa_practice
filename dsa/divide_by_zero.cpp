#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i, m, n) for (ll i = m; i < n; i++)
#define repr(i, m, n) for (ll i = m; i >= n; i--)
template<typename T>
istream& operator>>(istream &s, vector<T> &v)
{
    for(auto &x : v)
        s >> x;
    return s;
}
template<typename T>
ostream& operator<<(ostream& s,vector<T> &v)
{
    for(auto &x : v)
    {   
        s<<x<<" ";
    }
    return s;
}
#define vi vector<ll>
#define pi pair<ll,ll>

class Solution {
public:
    int largest_Sum(vector<int>& prices) {
        vector<ll> three;
        vector<ll> one;
        vector<ll> two;
        rep(i,0,prices.size())
        {
            if(prices[i] % 3 == 0)
            {
                three.push_back(prices[i]);
            }
            else if(prices[i]%3 == 1)
            {
                one.push_back(prices[i]);
            }
            else{
                two.push_back(prices[i]);
            }
        }
        int sum=0;
        rep(i,0,three.size())
        {
            sum+=three[i];
        }
        sort(one.rbegin(),one.rend());
        sort(two.rbegin(),two.rbegin());
        for(int i=0;i<two.size();i++)
        {
            if(i+3 < two.size())
            {
                sum+=(two[i]+two[i+1]+two[i+2]);
                i=i+3;
                two.pop_back();
                two.pop_back();
                two.pop_back();

            }
        }
        for(int i=0;i<one.size();i++)
        {
            if(i+3 < one.size())
            {
                sum+=(one[i]+one[i+1]+one[i+2]);
                i=i+3;
                one.pop_back();
                one.pop_back();
                one.pop_back();
                
            }
        }
        sort(one.begin(),one.end());
        sort(two.begin(),two.end());
        int i=min(one.size(),two.size());
        
        rep(j,0,i)
        {
            sum+=one.back();
            sum+=two.back();
            one.pop_back();
            two.pop_back();
        }
        cout<<sum<<endl;
        return 0;
    }
};
int main()
{
    vector<int> prices={0,1,3,4,5,6,3,4,5,6};
    Solution s1;
    s1.largest_Sum(prices);
}