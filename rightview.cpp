#include <iostream>
#include <map>
#include <queue>
#include <vector>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> result;
        if (root == 0)
        {
            return result;
        }
        map<int, int> m;                // vertical distance and val
        queue<pair<TreeNode *, int>> q; // node* and its vertical distance
        q.push({root, 0});
        int distance;
        while (q.size() > 0)
        {
            TreeNode *curr = q.front().first;
            distance = q.front().second;
            if (m.find(distance) == m.end())
            {
                m[distance] = curr->val;
            }
            if (curr->right != NULL)
            {
                q.push({curr->right, distance + 1});
            }
            if (curr->left != NULL)
            {
                q.push({curr->left, distance + 1});
            }
            
        }
        for(auto v : m)
        {
            result.push_back(v.second);
        }
        return result;
    }
};
