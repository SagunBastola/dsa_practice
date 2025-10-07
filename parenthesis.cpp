#include<iostream>
#include<stack>
#include<vector>
#include<string>
using namespace std;
//wrong
class Solution {
public:
    int longestValidParentheses(string s) {
        int count=0;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);

            }
            else
            {
                if(st.empty())
                {
                    return count;
                }
                if(st.top()=='(' && s[i]==')')
                {
                    count++;
                }
            }
        }
        return count;
    }
};