/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *increasingBST(TreeNode *root)
    {
        vector<int> p;
        inorder(root, p);
        TreeNode *newRoot = new TreeNode(0);
        TreeNode *cur = newRoot;
        for (int val : p)
        {
            cur->right = new TreeNode(val);
            cur = cur->right;
        }
        return newRoot->right;
    }
    void inorder(TreeNode *root, vector<int> &res)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }
};