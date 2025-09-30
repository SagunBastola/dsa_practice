#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
class Solution
{
public:
    bool issafe(vector<vector<char>> &board, int row, int col, char dig)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j != col && board[row][j] == dig) //skip self
                return false;
            if (j != row && board[j][col] == dig) // skip self
                return false;
        }

        // check 3x3 grid
        int sr = (row / 3) * 3;
        int sc = (col / 3) * 3;
        for (int i = sr; i < sr + 3; i++)
        {
            for (int j = sc; j < sc + 3; j++)
            {
                if ((i != row || j != col) && board[i][j] == dig) // skip self
                    return false;
            }
        }
        return true;
    }

    bool helper(vector<vector<char>> &board, int row, int col)
    {
        int nextr = row;
        int nextcol = col + 1;
        if (nextcol >= 9)
        {
            nextcol = 0;
            nextr += 1;
        }
        if (nextr == 9) // reached the end of board
        {
            return true;
        }

        if (board[row][col] == '.')
        {
            return helper(board, nextr, nextcol); // just skip empty cells
        }

        if (issafe(board, row, col, board[row][col]))
        {
            return helper(board, nextr, nextcol); // keep going
        }
        else
        {
            return false;
        }
    }

    bool isValidSudoku(vector<vector<char>> &board)
    {
        return helper(board, 0, 0);
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
    cout << s1.isValidSudoku(board);
    // for (int i = 0; i < 9; i++)
    // {
    //     for (int j = 0; j < 9; j++)
    //     {
    //         cout << board[i][j] << " ";
    //         if ((j + 1) % 3 == 0 && j < 8)
    //             cout << "| ";
    //     }
    //     cout << endl;
    //     if ((i + 1) % 3 == 0 && i < 8)
    //     {
    //         cout << "------+-------+------" << endl;
    //     }
    // }
    return 0;
}