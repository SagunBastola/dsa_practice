#include <bits/stdc++.h>
using namespace std;
string solve(string s)
{
    reverse(s.begin(), s.end());
    stack<char> st;
    unordered_set<char> unst = {'+', '-', '*', '^', '/', '(', ')'};
    unordered_set<char> high1 = {'*', '^', '/'};
    unordered_set<char> low1 = {'+', '-'};
    string result = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (unst.find(s[i]) == unst.end())
        {
            result += s[i];
            continue;
        }
        if (s[i] == ')')
        {
            st.push(s[i]);
            continue;
        }
        if (s[i] == '(')
        {
            while (st.top() != ')')
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
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}
int main()
{
    string s;
    cin >> s;
    cout << solve(s) << endl;
}