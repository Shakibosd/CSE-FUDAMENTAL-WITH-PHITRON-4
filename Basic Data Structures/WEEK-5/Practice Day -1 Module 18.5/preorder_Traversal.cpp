/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int>v;
void Pre_order(TreeNode<int>* root){
    if(root == NULL) return;
    v.push_back(root->data);
    Pre_order(root->left);
    Pre_order(root->right);
}
vector<int> preOrder(TreeNode<int>* root)
{
    v.clear();
    Pre_order(root);
    return v;
}

