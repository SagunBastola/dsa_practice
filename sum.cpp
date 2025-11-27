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
#include <vector>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};
class Solution {
public:
    int helper(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        
        int leftsum=helper(root->left);
        
        int rightsum=helper(root->right);
        root->val+=leftsum+rightsum;
        return root->val;
    }
    TreeNode* sumtree(TreeNode* root) {
        helper(root);
        return root;
    }
};
int main()
{
    return 0;
}

