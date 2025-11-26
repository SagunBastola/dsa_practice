#include <iostream>
#include <vector>
#include <queue>
#include <map>
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
bool issubroot(node *root, node *subtree)
{
    if (root == NULL || subtree == NULL)
        return (root == subtree);
    if (root->data == subtree->data)
        return identical(root, subtree);
    return issubroot(root->left, subtree) || issubroot(root->right, subtree);
}
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = diameter(root->left);
    int right = diameter(root->right);
    int current = height(root->left) + height(root->right);
    return max(max(left, right), current);
}
int ans = 0;
int dia(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = dia(root->left);
    int right = dia(root->right);
    ans = max(ans, max(left, right) + 1);
    return ans;
}
void topview(node *root)
{
    queue<pair<node *, int>> q;
    map<int, int> m;
    q.push({root, 0});
    while (q.size() > 0)
    {
        pair<node *, int> curr = q.front();
        q.pop();
        if (m.find(curr.second) != m.end())
        {
            continue;
        }
        cout << curr.first->data << " ";
        m[curr.second] = 1;
        if (curr.first->left != NULL)
            q.push({curr.first->left, curr.second - 1});
        if (curr.first->right != NULL)
            q.push({curr.first->right, curr.second + 1});
    }
}
void printk(node *root, int k)
{
    if (root == NULL)
        return;
    if (k < 1)
        return;
    if (k == 1)
        cout << root->data << " ";
    printk(root->left, k - 1);
    printk(root->right, k - 1);
}
void sumk(node* root,map<int,int>& m,int k)
{
    if(root==NULL) return;
    if(m.find(k)==m.end())
    {
        m[k]=0;
    }
    m[k]+=root->data;
    sumk(root->right,m,k+1);
    sumk(root->left,m,k+1);
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
    cout << endl;
    cout << issubroot(root, root3);
    cout << endl;
    cout << dia(root);
    cout << endl;
    topview(root);
    cout<<endl;
    printk(root,2);
    map<int,int> m;
    sumk(root,m,0);
    int max1=0;
    cout<<endl;
    for(int i=0;i<m.size();i++)
    {
        max1=max(max1,m[i]);
    }
    cout<<max1;
    return -1;
}