#include<iostream>
#include<map>
#include<queue>
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
void topview(TreeNode* root)
{
    if(root==0)
    {
        return;
    }
    map<int,int> m;//horizontal distance and val
    queue<pair<TreeNode*,int>> q;//node* and its horizontal distance
    q.push({root,0});
    while(q.size()>0)
    {

    }
}
