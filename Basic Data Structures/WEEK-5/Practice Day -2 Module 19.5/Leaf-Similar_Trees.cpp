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
class Solution {
public:
    void fun(TreeNode *&r, vector<int> &v){


        if(r->left == NULL && r->right == NULL)
        {
            v.push_back(r->val);
        }
        if(r->left)fun(r->left, v);
        if(r->right)fun(r->right, v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        fun(root1, v1);
        fun(root2, v2);
        return v1 == v2;
    }
};
