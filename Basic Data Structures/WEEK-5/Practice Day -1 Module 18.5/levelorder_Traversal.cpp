#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int>v;
void level_order(BinaryTreeNode<int> *root){
    if (root == NULL){
        // cout << "Tree Nai" << endl;
        return;
    }
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty()){
        // 1. age ber kore ano
        BinaryTreeNode<int> *p = q.front();
        q.pop();

        // jabotio ja kaj ace ta koro
        v.push_back(p->val);

        // tar children gula ke rakho
        if (p->left){
            q.push(p->left);
        }
        if (p->right){
            q.push(p->right);
        }
    }
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    v.clear();
    level_order(root);
    return v;
}