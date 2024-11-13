//20 10 30 -1 15 25 35 -1 -1 -1 -1 -1 -1 
#include<bits/stdc++.h>
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
void level_order(node* root){
    if(root == NULL){
        cout<<"Tree Nai"<<endl;
        return;
    }
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node* p = q.front();
        q.pop();

        cout<<p->val<<" ";

        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
}
void insert_bst(node*& root, int x){
    if(root == NULL){
        root = new node(x);
        return;
    }
    if(x < root->val){
        if(root->left == NULL){
            root->left = new node(x);
        }
        else{
            insert_bst(root->left, x);
        }
    }
    else{
        if(root->right == NULL){
            root->right = new node(x);
        }
        else{
            insert_bst(root->right, x);
        }
    }
}
int main(){
    node* root = input_tree();
    int x;
    cin>>x;
    insert_bst(root,x);
    level_order(root);
    // insert_bst(root,13);
    // insert_bst(root,32);
    // insert_bst(root,27);
    // insert_bst(root,22);
    // level_order(root);
    return 0;
}