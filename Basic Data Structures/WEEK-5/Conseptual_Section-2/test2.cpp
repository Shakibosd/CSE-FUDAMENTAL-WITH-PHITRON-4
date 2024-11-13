class Solution {
public:
    int res = 0;

    int findSum(TreeNode *root){
        if(root == NULL) return 0;
        int l = findSum(root->left);
        int r = findSum(root->right);

        res += abs(l-r);
        return l + r + root->val;
    }
    int findTilt(TreeNode* root) {
        findSum(root);
        return res;
    }

};