/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int maxHeight(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int left = maxHeight(root->left);
    int right = maxHeight(root->right);
    return max(left, right) + 1;
}

int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    maxHeight(root);
}
