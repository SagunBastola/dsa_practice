#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

public:
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
static int idx = -1;
node *preorder(vector<int> &sequence)
{
    idx++;
    if (sequence[idx] == -1)
    {
        return NULL;
    }
    node *root = new node(sequence[idx]);
    root->left = preorder(sequence);
    root->right = preorder(sequence);

    return root;
}
void show(node *root)
{
    if (root == NULL)
    {
        cout << "-1" << "  ";
        return;
    }
    cout << root->data << " ";
    show(root->left);
    show(root->right);
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void level(node *root)
{
    queue<node *> q;
    q.push(root);
    while (q.size() > 0)
    {
        node *curr = q.front();
        ;
        q.pop();
        cout << curr->data;
        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}
int height(node *root)
{
    if (root == NULL)
        return 0;
    int left = height(root->left);
    int right = height(root->right);
    return max(left, right) + 1;
}
int count(node *root)
{
    if (root == NULL)
        return 0;
    int left = count(root->left);
    int right = count(root->right);
    return left + right + 1;
}
bool identical(node *root1, node *root2)
{
    if (root1 == nullptr && root2 == nullptr)
    {
        return true;
    }
    if (root1 == nullptr || root2 == nullptr)
    {
        return false;
    }
    bool left;
    bool right;
    if (root1->data != root2->data)
    {
        return false;
    }
    left = identical(root1->left, root2->left);
    right = identical(root1->right, root2->right);
    return left && right;
}
bool issubroot(node* root,node* subtree)
{
    if(root==NULL || subtree==NULL) return (root==subtree);
    if(root->data==subtree->data) return identical(root,subtree);
    return issubroot(root->left,subtree)|| issubroot(root->right,subtree);
}
int main()
{
    vector<int> sequen = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    node *root = preorder(sequen);
    idx = -1;
    vector<int> sequen1 = {1, 4, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    node *root2 = preorder(sequen1);
    show(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    level(root);
    cout << endl;
    cout << height(root);
    cout << endl;
    cout << count(root);
    cout << endl;
    cout << identical(root, root2);
    idx = -1;
    vector<int> sequen2 = {3, 4, -1, -1, 5, -1, -1};
    node *root3 = preorder(sequen2);
    cout<<endl;
    cout<<issubroot(root,root3);
    return -1;
}