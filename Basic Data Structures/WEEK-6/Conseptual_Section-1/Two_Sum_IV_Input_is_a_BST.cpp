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
    void inorder(TreeNode *root, vector<int> &v)
    {
        if (root == nullptr)
        {
            return;
        }
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    bool findTarget(TreeNode *root, int k)
    {
        vector<int> list;
        inorder(root, list);
        int l = 0, r = list.size() - 1;
        while (l < r)
        {
            int sum = list[l] + list[r];
            if (sum == k)
            {
                return true;
            }
            if (sum < k)
            {
                l++;
            }
            if (sum > k)
            {
                r--;
            }
        }
        return false;
    }
};
