class Solution {
public:
    void swapNode(TreeNode *p, TreeNode *q, int level){
        if(p == NULL || q == NULL) return;
        if(level % 2 == 1){
            swap(p->val, q->val);
        }
        swapNode(p->left, q->right, level+1);
        swapNode(p->right, q->left, level+1);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        swapNode(root->left, root->right, 1);
        return root;
    }
};
