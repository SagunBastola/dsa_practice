#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b != 0)
    {
        return gcd(b,a%b);
    }
    return a;
}
class Solution {
public:
    bool issafe(vector<string> ab,int n,int row,int col)
    {
        //check is row
        for(int i=0;i<col;i++)
        {
            if(ab[row][i] == 'Q')
            {
                return false;
            }
        } 
        //check for col
        for(int i=0;i<row;i++)
        {
            if(ab[i][col] == 'Q')
            {
                return false;
            }
        }
        //check for left diagonal
        for(int i=row,j=col;i>=0 && j>=0 ; i--,j--)
        {
            if(ab[i][j] == 'Q')
            {
                return false;
            }
        }
        //check for right diagonal
        for(int i=row,j=col;i>=0 && j<n;i--,j++)
        {
            if(ab[i][j] == 'Q')
            {
                return false;
            }
        }
        return true;
    }
    void helper(vector<vector<string>> ans,vector<string> ab,int n,int row)
    {
        if(row == n)
        {
            ans.push_back(ab);
            return;
        }
        for(int col=0;col<n;col++)
        {
            if(issafe(ab,n,row,col))
            {
                ab[row][col]='Q';
            }
            ab[row][col]='.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> ab(n,string(n,'.'));
        helper(ans,ab,n,0);
        return ans;
    }
};