#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool issafe(vector<vector<char>> &board, int row, int col, int digit)
    {
        char dig = digit + '0';
        // vertical
        for (int i = 0; i < 9; i++)
        {
            if (board[i][col] == dig)
            {
                return false;
            }
        }
        // horizontal
        for (int i = 0; i < 9; i++)
        {
            if (board[row][i] == dig)
            {
                return false;
            }
        }
        //grid
        int r = (row / 3) * 3;
        int c = (col / 3) * 3;
        for (int i = r; i < r + 3; i++)
        {
            for (int j = c; j < c + 3; j++)
            {
                if (board[i][j] == dig)
                {
                    return false;
                }
            }
        }
    }
    bool helper(vector<vector<char>> &board, int row, int col)
    {
        if (row == 9)
        {
            return true;
        }
        int nextr = row;
        int nextcol = col + 1;
        if (nextcol >= 9)
        {
            nextr += 1;
            nextcol = 0;
        }
        if (board[row][col] != '.')
        {
            return helper(board, nextr, nextcol);
        }
        for (int i = 1; i <= 9; i++)
        {
            if (issafe(board, row, col, i))
            {
                board[row][col] = i;
                if (helper(board, nextr, nextcol))
                {
                    return true;
                }
                board[row][col] = '.';
            }
            return false;
        }
        return true;
    }
    void solveSudoku(vector<vector<char>> &board)
    {
        helper(board, 0, 0);
    }
};