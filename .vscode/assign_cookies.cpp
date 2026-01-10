#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int idx=0;
        int n=g.size();
        int m=s.size();
        for(int i=0;i<n && idx<m;i++)
        {
            if(g[i] <= s[idx])
            {
                count++;
                idx++;
            }
            else
            {
                i--;
                idx++;
            }

        }
        return count;
    }
};
int main()
{
    Solution s1;
    vector<int> v={1,2,3,7,5};
    vector<int> a={1,7,3};
    cout<<s1.findContentChildren(v,a);
    return 0;
}