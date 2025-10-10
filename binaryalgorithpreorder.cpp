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
void preorder(node* binary)
{
    if(binary==NULL) return;
    cout<<binary->data<<" ";
    preorder(binary->left);
    preorder(binary->right);

}
void postorder(node* binary)
{
    if(binary==NULL) return;
    
    preorder(binary->left);
    preorder(binary->right);
    cout<<binary->data<<" ";
    
}
void inorder(node* binary)
{
    if(binary==NULL) return;
    
    preorder(binary->left);
    cout<<binary->data<<" ";
    preorder(binary->right);
    
    
}

int main()
{
    vector<int> presequence={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* binary=binarytree(presequence);
    preorder(binary);
    cout<<endl;
    postorder(binary);
    cout<<endl;
    inorder(binary);

    return 0;
}