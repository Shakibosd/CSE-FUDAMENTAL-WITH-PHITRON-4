/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
int count_leaf_node(BinaryTreeNode<int> *root){
    // base case
    if (root == NULL){
        return 0;
    }
    if (root->left == NULL && root->right == NULL){
        return 1;
    }
    else{
        int left = count_leaf_node(root->left);
        int right = count_leaf_node(root->right);
        return left + right;
    }
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
     count_leaf_node(root);
}



