/*Problem Statement

You will be given a binary tree as input in level order. You need to tell if the binary tree is perfect or not. A binary tree is called perfect if all leaf nodes are at the maximum depth of the tree, and the tree is completely filled with no gaps.

Here is an example of perfect binary tree:

image

Also there is formula available to tell if a binary tree is perfect or not. The formula is :

Total number of nodes = -1
Note: Here depth is counted from . In the above image maximum depth is , so total number of nodes are . So there should be  nodes to call it a perfect binary tree.

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output  if the tree is perfect,  otherwise.
Sample Input 0

1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 0

YES
Sample Input 1

10 20 30 40 -1 60 -1 -1 -1 -1 -1
Sample Output 1

NO
Sample Input 2

10 20 -1 -1 -1
Sample Output 2

NO
Sample Input 3

10 20 30 40 50 60 70 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 3

YES*/
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
        int val;
        node* left;
        node* right;
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
int Perfect_Binary_Tree(node *root)
{
    //base case
    if (root == NULL)
        return 0;
    return 1 + Perfect_Binary_Tree(root->left) + Perfect_Binary_Tree(root->right);
}
int depth(node *root)
{
    //base case
    if (root == NULL)
        return 0;
    return 1 + max(depth(root->left), depth(root->right));
}

int perfect_tree(node *root)
{
    int n = Perfect_Binary_Tree(root);
    int d = depth(root);
    return n == (1 << d) - 1;
}

int main()
{
    node *root = input_tree();
    int flag = perfect_tree(root);
    if(flag == 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}