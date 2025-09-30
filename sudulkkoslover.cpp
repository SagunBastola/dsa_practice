#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution
{
public:
    bool issafe(vector<vector<char>> &board, int row, int col, int d)
    {
        char dig = d + '0';
        // horizantal
        for (int j = 0; j < 9; j++)
        {
            // horizantal
            if (board[row][j] == dig)
            {
                return false;
            }
            // vertical
            if (board[j][col] == dig)
            {
                return false;
            }
        }
        // grid
        int sr = (row / 3) * 3;
        int sc = (col / 3) * 3;
        for (int i = sr; i < sr + 3; i++)
        {
            for (int j = sc; j < sc + 3; j++)
            {
                if (board[i][j] == dig)
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool helper(vector<vector<char>> &board, int row, int col)
    {
        if (row == 9)
        {
            return true;
        }
        int nextr = row;
        int nextc = col + 1;
        if (nextc >= 9)
        {
            nextc = 0;
            nextr = row + 1;
        }
        if (board[row][col] != '.')
        {
            return helper(board, nextr, nextc);
        }
        for (int i = 1; i <= 9; i++)
        {
            if (issafe(board, row, col, i))
            {
                board[row][col] = i + '0';
                if (helper(board, nextr, nextc))
                {
                    return true;
                }
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>> &board)
    {
        helper(board, 0, 0);
    }
};
int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    Solution s1;
    s1.solveSudoku(board);
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
            if ((j + 1) % 3 == 0 && j < 8)
                cout << "| ";
        }
        cout << endl;
        if ((i + 1) % 3 == 0 && i < 8)
        {
            cout << "------+-------+------" << endl;
        }
    }
    return 0;
}