#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public:
    const int MOD = 1e9 + 7;
    long long ans = 0;

    long long totalSum(TreeNode* root) {
        if (!root)
            return 0;
        return root->val + totalSum(root->left) + totalSum(root->right);
    }

    long long dfs(TreeNode* root, long long total) {
        if (!root)
            return 0;

        long long left = dfs(root->left, total);
        long long right = dfs(root->right, total);

        long long subtree = root->val + left + right;
        ans = max(ans, subtree * (total - subtree));

        return subtree;
    }

    int maxProduct(TreeNode* root) {
        long long total = totalSum(root);
        dfs(root, total);
        return ans % MOD;
    }
};

int main()
{
    return 0;
}