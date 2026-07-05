#include <bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

string solve(string s)
{
    reverse(s.begin(), s.end());

    for (char &c : s)
    {
        if (c == '(')
            c = ')';
        else if (c == ')')
            c = '(';
    }

    stack<char> st;
    string postfix = "";

    for (char c : s)
    {
        if (isalnum(c))
        {
            postfix += c;
        }
        else if (c == '(')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() &&
                   ((precedence(st.top()) > precedence(c)) ||
                    (precedence(st.top()) == precedence(c) && c == '^')) &&
                   st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        postfix += st.top();
        st.pop();
    }

    reverse(postfix.begin(), postfix.end());
    return postfix;
}

int main()
{
    string s;
    cin >> s;
    cout << solve(s);
}