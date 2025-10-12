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
int count(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = count(root->left);
    int right = count(root->right);
    return left + right + 1;
}