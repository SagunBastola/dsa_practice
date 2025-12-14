/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
#include<queue>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class TreeNode
{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val):data(val),left(NULL),right(NULL)
    {}
};
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue <pair<TreeNode*, unsigned long long int>> q;
        q.push({root, 0});
        unsigned long long int maxwid = 0;
        while (q.size() > 0) {
            int currlevsize = q.size();
            maxwid = max(maxwid, q.back().second - q.front().second + 1);
            for (int i = 0; i < currlevsize; i++) {
                auto lev = q.front();
                q.pop();
                if (lev.first->left != NULL) {
                    q.push({lev.first->left, 2 * lev.second + 1});
                }
                else if (lev.first->right != NULL) {
                    q.push({lev.first->right, 2 * lev.second + 2});
                }
            }
        }
        return maxwid;
    }
};