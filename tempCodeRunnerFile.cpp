int diameter(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=diameter(root->left);
    int right=diameter(root->right);
    int current=height(root->left)+height(root->right);
    return max(left,right,current);
}