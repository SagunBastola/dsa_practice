#include <bits/stdc++.h>
using namespace std;
void helper(int n, string s, vector<string> &ans, string ava, int a)
{
    if (s.size() > 0)
    {
        ans.push_back(s);
    }
    if (s.size() == n)
    {

        return;
    }
    for (int i = a; i < n; i++)
    {
        helper(n, s + ava[i], ans, ava, i + 1);
    }
}
int main()
{
    string s = "abc";
    vector<string> ans;
    helper(s.size(), "", ans, s, 0);
    for (auto a : ans)
    {
        cout << a << ".";
    }
    return 0;
}