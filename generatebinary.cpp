#include<bits/stdc++.h>
using namespace std;
void helper(int n,string curr,vector<string>& ans)
{
    if(curr.size() >= n)
    {
        ans.push_back(curr);
        return;
    }
    helper(n,curr+'0',ans);
    if(curr.empty() || curr.back()!='1')
    {
        helper(n,curr+'1',ans);
    }
}
vector<string> generate(int n)
{
    vector<string> ans;
    string s="";
    helper(n,s,ans);
    return ans;
}
int main()
{
    vector<string> s=generate(5);
    for (auto a : s)
    {
        cout<<a<<" ";
    }

}
