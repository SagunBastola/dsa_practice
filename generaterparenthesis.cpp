#include <iostream>
using namespace std;
#include <vector>
#include <string>
class Solution
{
public:
    void helper(string s, vector<string> &ans, int k, int n, int b)
    {
        if (k == n && b == n)
        {
            ans.push_back(s);
            return;
        }
        if (k > n)
        {
            return;
        }
        if (b > n)
        {
            return;
        }
        if(k<b)
        {
            return;
        }
        helper(s + '(', ans, k + 1, n, b);
        helper(s + ')', ans, k, n, b + 1);
        return;
    }
    vector<string> generateParenthesis(int n)
    {
        string s="";
        vector<string> ans;
        helper(s, ans, 0, n, 0);
        return ans;
    }
};
int main()
{
    return 0;
}