// 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1
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
int search_bst(node* root, int x){
    if(root == NULL){
        return 0; 
    }
    if(root->val == x){
        return 1;
    }
    if(x < root->val){
        return search_bst(root->left, x);
    }
    else{
        return search_bst(root->right, x);
    }
}
int main(){
    node* root = input_tree();
    if(search_bst(root, 100)){
        cout<<"YES ? Found"<<endl;
    }
    else{
        cout<<"NO ? Not Found"<<endl;
    }
    return 0;
}