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
string solve(string s)
{
    stack<char> st;
    unordered_set<char> unst = {'+', '-', '*', '^', '/', '(', ')'};
    unordered_set<char> high1 = {'*', '^', '/'};
    unordered_set<char> low1 = {'+', '-'};
    string result = "";

    rep(i,0,s.size())
    {
        if (unst.find(s[i]) == unst.end())
        {
            result += s[i];
            continue;
        }
        if (s[i] == '(')
        {
            st.push(s[i]);
            continue;
        }
        if (s[i] == ')')
        {
            while (st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
            continue;
        }
        if (high1.find(s[i]) != high1.end())
        {
            while (!(st.empty()) && (st.top() == '/' || st.top() == '*' || st.top() == '^'))
            {
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
            continue;
        }

        if (low1.find(s[i]) != low1.end())
        {
            while (!(st.empty()) && (st.top() == '/' || st.top() == '*' || st.top() == '^' || st.top() == '+' || st.top() == '-'))
            {
                result += st.top();
                st.pop();
            }
            st.push(s[i]);
            continue;
        }
    }
    while(! st.empty())
    {
        result+=st.top();
        st.pop();
    }
    return result;
}
int main()
{
    string s;
    cin >> s;
    cout << solve(s) << endl;
}