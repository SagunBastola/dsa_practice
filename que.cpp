#include<bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    void helper(vector<vector<string>>& ans, int n, int i, vector<string> st) {
        if (i == n) {
            ans.push_back(st);
            return;
        }
        for (int j = 0; j < n; j++) {
            if (issafe(st, i, j, n)) {
                st[i][j] = 'Q';
                helper(ans, n, i + 1, st);
                st[i][j] = '.';
            }
        }
    }
    bool issafe(vector<string>st,int row,int col,int n) {
        //check for the row;
        for(int i=0;i<row;i++)
        {
            if(st[i][col]=='Q')
            {
                return false;
            }
        }
        //check for the col
        for(int j=0;j<col;j++)
        {
            if(st[row][j]=='Q')
            {
                return false;
            }
        }
        //left diagonal
        for(int i=row,j=col;i>=0 && j>= 0; i--,j--)
        {
            if(st[i][j]=='Q')
            {
                return false;
            }
        }
        //right diagonal
        for(int i=row,j=col;i>=0 && j<n;i--,j++)
        {
            if(st[i][j]=='Q')
            {
                return false;
            }
        }
        return true;

    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> st(n, string(n, '.'));
        helper(ans, n, 0, st);
        return ans;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<vector<string>> ans;
    Solution s1;

    ans=s1.solveNQueens(n);
    cout<<n;
    return 1;
}