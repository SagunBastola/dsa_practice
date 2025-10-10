#include<iostream>
#include<vector>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int val):data(val),left(NULL),right(NULL)
    {}
};
static int idx=-1;
node* binarytree(vector<int> &preorder)
{
    
    idx++;
    if(preorder[idx]==-1) return NULL;
    node* root=new node(preorder[idx]);

    root->left=binarytree(preorder);
    root->right=binarytree(preorder);

    return root;
    
}
int main()
{
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* binary=binarytree(preorder);
    cout<<binary->data<<" ";
    cout<<binary->left->data<<" ";
    cout<<binary->right->data<<" ";
    return 0;
}