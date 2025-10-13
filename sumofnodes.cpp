#include <iostream>
using namespace std;
#include <algorithm>
class node
{
public:
    int val;
    node *left;
    node *right;
};
int sum(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = sum(root->left);
    int right = sum(root->right);
    return left + right + root->val;
}
int main()
{
    
}