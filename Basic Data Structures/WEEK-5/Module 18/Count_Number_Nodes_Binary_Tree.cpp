//10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1
#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int val;
    node *left;
    node *right;
    node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
node *input_tree(){
    int val;
    cin >> val;
    node *root;
    if (val == (-1)){
        root = NULL;
    }
    else{
        root = new node(val);
    }
    queue<node *> q;
    if (root){
        q.push(root);
    }
    while (!q.empty()){
        // 1. ber kore ano
        node *p = q.front();
        q.pop();

        // 2. jabotio ja kaj ache ta koro
        int myLeft, myRight;
        cin >> myLeft >> myRight;
        node *left;
        node *right;
        if (myLeft == (-1)){
            left = NULL;
        }
        else{
            left = new node(myLeft);
        }
        if (myRight == (-1)){
            right = NULL;
        }
        else{
            right = new node(myRight);
        }
        p->left = left;
        p->right = right;

        // 3. children gula ke push koro
        if (p->left){
            q.push(p->left);
        }
        if (p->right){
            q.push(p->right);
        }
    }
    return root;
}
int count_node(node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l + r + 1;
}
int main()
{
    node *root = input_tree();
    cout << count_node(root) << endl;
    return 0;
}