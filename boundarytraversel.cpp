#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};
bool isleaf(Node *root)
{
    return (root->left == NULL) && (root->right == NULL);
}
void leftboundary(Node *root, vector<int> &vec)
{
    if (root == NULL)
    {
        return;
    }
    if (!isleaf(root))
    {
        vec.push_back(root->data);
    }
    if (root->left)
    {
        leftboundary(root->left, vec);
    }
    else
    {
        leftboundary(root->right, vec);
    }
}
void rightboundary(Node *root, vector<int> &vec)
{
    Node *curr = root->right;
    vector<int> temp;
    while (curr)
    {
        if (!isleaf(curr))
        {
            vec.push_back(curr->data);
        }
        if (curr->right)
        {
            curr = curr->right;
        }
        else
        {
            curr = curr->left;
        }
    }
    for (int i = temp.size() - 1; i >= 0; i--)
    {
        vec.push_back(temp[i]);
    }
}
void leaf(Node *root, vector<int> &vec)
{
    if (root == NULL)
    {
        return;
    }
    leaf(root->left, vec);
    if (isleaf(root))
    {
        vec.push_back(root->data);
    }
    leaf(root->right, vec);
}
vector<int> printBoundary(Node *root)
{
    vector<int> res;
    if (!root)
    {
        return res;
    }
    if (!isleaf(root))
    {
        res.push_back(root->data);
    }
    leftboundary(root->left, res);
    leaf(root, res);
    rightboundary(root, res);

    return res;
}
void printResult(const vector<int>& result) {
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    // Creating a sample binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Get the boundary traversal
    vector<int> result = printBoundary(root);

    // Print the result
    cout << "Boundary Traversal: ";
    printResult(result);

    return 0;
}