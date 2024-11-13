/*Problem Statement

You will be given a binary tree as input in level order. You need to print the values of leaf nodes in descending order.

For example:

image

The output for the above tree will be: 60 50 40

Input Format

Input will contain the binary tree in level order.  means there is no node available.
Constraints

 Maximum number of nodes 
 Node's value 
Output Format

Output the values of leaf nodes in descending order.
Sample Input 0

10 20 30 40 50 -1 60 -1 -1 -1 -1 -1 -1
Sample Output 0

60 50 40*/
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
node *input_tree()
{
    int val;
    cin >> val;
    node *root;
    if (val == (-1))
    {
        root = NULL;
    }
    else
    {
        root = new node(val);
    }
    queue<node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        // 1. ber kore ano
        node *p = q.front();
        q.pop();

        // 2. jabotio ja kaj ache ta koro
        int myLeft, myRight;
        cin >> myLeft >> myRight;
        node *left;
        node *right;
        if (myLeft == (-1))
        {
            left = NULL;
        }
        else
        {
            left = new node(myLeft);
        }
        if (myRight == (-1))
        {
            right = NULL;
        }
        else
        {
            right = new node(myRight);
        }
        p->left = left;
        p->right = right;

        // 3. children gula ke push koro
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
void leaf_node(node *root, vector<int> &leafVal)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        leafVal.push_back(root->val);
    }
    else
    {
        leaf_node(root->left, leafVal);
        leaf_node(root->right, leafVal);
    }
}
int main()
{
    node *root = input_tree();
    vector<int> leafval;
    // function call
    leaf_node(root, leafval);
    // sorting
    sort(leafval.rbegin(), leafval.rend());
    for (int val : leafval)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}