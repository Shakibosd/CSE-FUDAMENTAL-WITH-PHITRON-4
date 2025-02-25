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
    int res = INT_MAX;
    int his = INT_MAX;
    void inorder(TreeNode *root)
    {
        if (root == nullptr)
        {
            return;
        }
        inorder(root->left);
        res = min(res, abs(root->val - his));
        his = root->val;
        inorder(root->right);
    }
    int getMinimumDifference(TreeNode *root)
    {
        inorder(root);
        return res;
    }
};