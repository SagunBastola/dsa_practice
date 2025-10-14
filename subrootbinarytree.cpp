/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <iostream>
using namespace std;
#include <vector>
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
    bool identical(TreeNode *root, TreeNode *subroot)
    {
        if (root == NULL || subroot == NULL)
        {
            return root == subroot;
        }
        return (root->val == subroot->val) && identical(root->left, subroot->left) && identical(root->right, subroot->right);
    }
    bool isSubtree(TreeNode *root, TreeNode *subroot)
    {
        if (root == NULL || subroot == NULL)
        {
            return root == subroot;
        }
        if (root->val == subroot->val && identical(root, subroot))
        {
            return true;
        }
        return (isSubtree(root->left, subroot) || isSubtree(root->right, subroot));
    }
};