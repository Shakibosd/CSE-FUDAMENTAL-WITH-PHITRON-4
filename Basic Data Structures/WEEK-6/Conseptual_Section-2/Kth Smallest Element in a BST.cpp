// /*
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
// */

// class Solution
// {
// public:
//     priority_queue<int, vector<int>, greater<int>> pq;
//     void preOrder(TreeNode *root)
//     {
//         if (root == NULL)
//         {
//             return;
//         }
//         pq.push(root->val);
//         preOrder(root->left);
//         preOrder(root->right);
//     }
//     int kthSmallest(TreeNode *root, int k)
//     {
//         preOrder(root);
//         while (k > 1)
//             pq.pop(), k--;
//         return pq.top();
//     }
// };

class Solution
{
public:
    set<int> s;
    void preOrder(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        s.insert(root->val);
        preOrder(root->left);
        preOrder(root->right);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        preOrder(root);
        auto it = s.begin();
        advance(it, k - 1);
        return *it;
    }
};