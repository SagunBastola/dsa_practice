#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    bool helper(vector<vector<int>> &grid, int row, int col, int n, int exp)
    {
        if (row < 0 || col < 0 || row >= n || col >= n || grid[row][col] != exp)
        {
            return false;
        }
        if (exp == n * n - 1 && grid[row][col] == exp)
        {
            return true;
        }
        bool ans1 = false;
        ans1 = ans1 || helper(grid, row - 2, col + 1, n, exp + 1);
        ans1 = ans1 || helper(grid, row - 1, col + 2, n, exp + 1);
        ans1 = ans1 || helper(grid, row + 1, col + 2, n, exp + 1);
        ans1 = ans1 || helper(grid, row + 2, col + 1, n, exp + 1);
        ans1 = ans1 || helper(grid, row + 2, col - 1, n, exp + 1);
        ans1 = ans1 || helper(grid, row + 1, col - 2, n, exp + 1);
        ans1 = ans1 || helper(grid, row - 1, col - 2, n, exp + 1);
        ans1 = ans1 || helper(grid, row - 2, col - 1, n, exp + 1);
        return ans1;
    }
    bool checkValidGrid(vector<vector<int>> &grid)
    {
        return helper(grid, 0, 0, grid.size(), 0);
    }
};