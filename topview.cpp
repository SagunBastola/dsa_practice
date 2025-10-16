#include <iostream>
#include <map>
#include <queue>
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
void topview(TreeNode *root)
{
    if (root == 0)
    {
        return;
    }
    map<int, int> m;                // horizontal distance and val
    queue<pair<TreeNode *, int>> q; // node* and its horizontal distance
    q.push({root, 0});
    int distance;
    while (q.size() > 0)
    {
        TreeNode *curr = q.front().first;
        distance = q.front().second;
        q.pop();
        if (m.find(distance) == m.end())
        {
            m[distance] = curr->val;
        }
        if (curr->left != NULL)
        {
            q.push({curr->left, distance - 1});
        }
        if (curr->right != NULL)
        {
            q.push({curr->right, distance - 1});
        }
    }
    for (auto m1 : m)
    {
        cout << m1.second << endl;
    }
}
