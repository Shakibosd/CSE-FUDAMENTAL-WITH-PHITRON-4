/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left, *right;
        TreeNode() : val(0), left(NULL), right(NULL) {}
        TreeNode(T x) : val(x), left(NULL), right(NULL) {}
        TreeNode(T x, TreeNode<T> *left, TreeNode<T> *right) : val(x), left(left), right(right) {}
    };


************************************************************/
template <typename T>
void inorderTraversal(TreeNode<T> *root)
{
    if (root)
    {
        inorderTraversal(root->left);
        cout << root->val;
        inorderTraversal(root->right);
    }
}

template <typename T>
TreeNode<T> *insertionInBST(TreeNode<T> *root, int val)
{
    if (root == NULL)
    {
        return new TreeNode<T>(val);
    }
    if (val < root->val)
    {
        root->left = insertionInBST(root->left, val);
    }
    else
    {
        root->right = insertionInBST(root->right, val);
    }
    return root;
}