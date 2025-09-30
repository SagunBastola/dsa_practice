#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
class Solution {
public:
    bool issafe(vector<string> board,int row,int col,int n)
    {
        //horizontally
        for(int j=0;j<n;j++)
        {
            if(board[row][j]=='Q')
            {
                return false;
            }
        }
        //vertically
        for(int j=0;j<n;j++)
        {
            if(board[j][col]=='Q')
            {
                return false;
            }
        }
        //left diagonal
        for(int i=row,j=col;i>=0 && j>=0 ;i--,j--)
        {
            if(board[i][j]=='Q')
            {
                return false;
            }
        }
        //right diagonal
        for(int i=row,j=col;i>=0 && j<n ;i--,j++)
        {
            if(board[i][j]=='Q')
            {
                return false;
            }
        }
        return true;
    }
    void helper(vector<string> board,int row,int n,vector<vector<string>>& ans)
    {
        if(row==n)
        {
            ans.push_back(board);
            return;

        }
        for(int j=0;j<n;j++)
        {
            if(issafe(board,row,j,n))
            {
                board[row][j]='Q';
                helper(board,row+1,n,ans);
                board[row][j]='.';
            }   
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        helper(board,0,n,ans);
        return ans;
    }
};